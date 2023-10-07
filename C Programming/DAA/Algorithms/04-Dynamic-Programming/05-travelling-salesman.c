#include <stdio.h>
#define n 4				// No. of nodes
#define MAX 1000000
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
    if (mask == ((1 << i) | 3)) return dist[1][i];
    // Memoization
    if (memo[i][mask] != 0) return memo[i][mask];
    int res = MAX; // Result of this sub-problem
    for (int j = 1; j <= n; j++)
        if ((mask & (1 << j)) && j != i && j != 1)
            res = min(res, fun(j, mask & (~(1 << i))) + dist[j][i]);
    return memo[i][mask] = res;
}
int main() {
    int ans = MAX;
    for (int i = 1; i <= n; i++)
        ans = min(ans, fun(i, (1 << (n + 1)) - 1) + dist[i][1]);
    printf("The cost of the most efficient tour = %d", ans);
	printf("\nName: Giver Khadka\tRoll No: 05\n");
    return 0;
}
