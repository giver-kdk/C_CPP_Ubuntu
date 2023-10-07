// Algorithm referenced from Programiz
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TREE_NODES 1000
struct Node {
    char data;
    int frequency;
    struct Node* left;
    struct Node* right;
};
struct MinHeap {
    int size;
    int capacity;
    struct Node** array;
};
struct Node* createNode(char data, int frequency) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->frequency = frequency;
    newNode->left = newNode->right = NULL;
    return newNode;
}
struct MinHeap* createMinHeap(int capacity) {
    struct MinHeap* minHeap = (struct MinHeap*)malloc(sizeof(struct MinHeap));
    minHeap->size = 0;
    minHeap->capacity = capacity;
    minHeap->array = (struct Node**)malloc(capacity * sizeof(struct Node*));
    return minHeap;
}
void swapNodes(struct Node** a, struct Node** b) {
    struct Node* temp = *a;
    *a = *b;
    *b = temp;
}
void minHeapify(struct MinHeap* minHeap, int idx) {
    int smallest = idx;
    int left = 2 * idx + 1;
    int right = 2 * idx + 2;
    if (left < minHeap->size && minHeap->array[left]->frequency < 
		minHeap->array[smallest]->frequency) smallest = left;
    if (right < minHeap->size && minHeap->array[right]->frequency < 
		minHeap->array[smallest]->frequency) smallest = right;
    if (smallest != idx) {
        swapNodes(&minHeap->array[smallest], &minHeap->array[idx]);
        minHeapify(minHeap, smallest);
    }
}
int isSizeOne(struct MinHeap* minHeap) {
    return minHeap->size == 1;
}
struct Node* extractMin(struct MinHeap* minHeap) {
    struct Node* temp = minHeap->array[0];
    minHeap->array[0] = minHeap->array[minHeap->size - 1];
    --minHeap->size;
    minHeapify(minHeap, 0);
    return temp;
}
void insertMinHeap(struct MinHeap* minHeap, struct Node* node) {
    ++minHeap->size;
    int i = minHeap->size - 1;
    while (i > 0 && node->frequency < minHeap->array[(i - 1) / 2]->frequency) {
        minHeap->array[i] = minHeap->array[(i - 1) / 2];
        i = (i - 1) / 2;
    }
    minHeap->array[i] = node;
}
struct MinHeap* buildMinHeap(char data[], int freq[], int size) {
    struct MinHeap* minHeap = createMinHeap(size);
    for (int i = 0; i < size; ++i) {
        minHeap->array[i] = createNode(data[i], freq[i]);
    }
    minHeap->size = size;
    int n = minHeap->size - 1;
    for (int i = (n - 1) / 2; i >= 0; --i) {
        minHeapify(minHeap, i);
    }
    return minHeap;
}
struct Node* buildHuffmanTree(char data[], int freq[], int size) {
    struct Node *left, *right, *top;
    struct MinHeap* minHeap = buildMinHeap(data, freq, size);
    while (!isSizeOne(minHeap)) {
        left = extractMin(minHeap);
        right = extractMin(minHeap);
        top = createNode('$', left->frequency + right->frequency);
        top->left = left;
        top->right = right;
        insertMinHeap(minHeap, top);
    }
    return extractMin(minHeap);
}
void printCodes(struct Node* root, int arr[], int top) {
    if (root->left) {
        arr[top] = 0;
        printCodes(root->left, arr, top + 1);
    }
    if (root->right) {
        arr[top] = 1;
        printCodes(root->right, arr, top + 1);
    }
    if (!root->left && !root->right) {
        printf("'%c': ", root->data);
        for (int i = 0; i < top; ++i) {
            printf("%d", arr[i]);
        }
        printf("\n");
    }
}
void HuffmanCodes(char data[], int freq[], int size) {
    struct Node* root = buildHuffmanTree(data, freq, size);
    int arr[MAX_TREE_NODES], top = 0;
    printf("Huffman Codes:\n");
    printCodes(root, arr, top);
}
int main() {
    int n;
    printf("Enter the number of characters: ");
    scanf("%d", &n);
    char data[n];
    int freq[n];
    for (int i = 0; i < n; ++i) {
        printf("Enter character %d: ", i + 1);
        scanf(" %c", &data[i]);
        printf("Enter frequency for character %c: ", data[i]);
        scanf("%d", &freq[i]);
    }
    HuffmanCodes(data, freq, n);
	printf("\nName: Giver Khadka\tRoll No: 05\n");
    return 0;
}