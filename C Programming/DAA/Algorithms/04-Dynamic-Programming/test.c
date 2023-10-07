#include <stdio.h>

// There are four nodes in the example graph (graph is 1-based)
#define n 4
#define MAX 1000000

// Dist[i][j] represents the shortest distance to go from i to j.
// This matrix can be calculated for any given graph using
// all-pair shortest path algorithms.
int dist[n + 1][n + 1] = {
    { 0, 0, 0, 0, 0 },    
	{ 0, 0, 6, 1, 3 },
    { 0, 4, 0, 2, 1 }, 
	{ 0, 1, 2, 0, 8 },
    { 0, 3, 1, 7, 0 },
};

// Memoization for top-down recursion
int memo[n + 1][1 << (n + 1)];

int min(int a, int b) {
    return a < b ? a : b;
}

int fun(int i, int mask) {
    // Base case
    // If only the ith bit and 1st bit are set in our mask,
    // it implies we have visited all other nodes already.
    if (mask == ((1 << i) | 3))
        return dist[1][i];
    // Memoization
    if (memo[i][mask] != 0)
        return memo[i][mask];

    int res = MAX; // Result of this sub-problem

    // We have to travel all nodes j in the mask and end the
    // path at the ith node, so for every node j in the mask,
    // recursively calculate the cost of traveling all nodes in
    // the mask except i and then travel back from node j to
    // node i, taking the shortest path. Take the minimum of
    // all possible j nodes.

    for (int j = 1; j <= n; j++)
        if ((mask & (1 << j)) && j != i && j != 1)
            res = min(res, fun(j, mask & (~(1 << i)))
                                    + dist[j][i]);
    return memo[i][mask] = res;
}

int main() {
    int ans = MAX;
    for (int i = 1; i <= n; i++)
        // Try to go from node 1, visiting all nodes in
        // between to i, then return from i, taking the
        // shortest route to 1.
        ans = min(ans, fun(i, (1 << (n + 1)) - 1)
                                + dist[i][1]);

    printf("The cost of the most efficient tour = %d", ans);

    return 0;
}
