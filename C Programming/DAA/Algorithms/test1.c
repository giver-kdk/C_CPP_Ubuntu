#include <stdio.h>
#include <stdlib.h>

// Function to swap two integers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Partition the array and return the index of the pivot
int partition(int arr[], int low, int high, int pivotIndex) {
    int pivot = arr[pivotIndex];
    swap(&arr[pivotIndex], &arr[high]);
    int i = low;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            swap(&arr[i], &arr[j]);
            i++;
        }
    }

    swap(&arr[i], &arr[high]);
    return i;
}

// Find the median of an array using insertion sort
int findMedian(int arr[], int low, int high) {
    int n = high - low + 1;
    int median;

    // Sort the subarray using insertion sort
    for (int i = low + 1; i <= high; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= low && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }

    // Median formula for grouped data
    median = arr[low + n / 2];
    return median;
}

// Find the ith smallest element using Median of Medians algorithm
int ithSmallest(int arr[], int low, int high, int k) {
    if (k > 0 && k <= high - low + 1) {
        int n = high - low + 1;
        int numMedians = (n + 4) / 5;
        int medians[numMedians];

        for (int i = 0; i < numMedians; i++) {
            int start = low + i * 5;
            int end = start + 4;
            if (end > high) {
                end = high;
            }
            medians[i] = findMedian(arr, start, end);
        }

        int medianOfMedians = (numMedians == 1) ? medians[0] : ithSmallest(medians, 0, numMedians - 1, numMedians / 2);

        int pivotIndex = -1;

        for (int i = low; i <= high; i++) {
            if (arr[i] == medianOfMedians) {
                pivotIndex = i;
                break;
            }
        }

        pivotIndex = partition(arr, low, high, pivotIndex);

        if (pivotIndex - low == k - 1) {
            return arr[pivotIndex];
        } else if (pivotIndex - low > k - 1) {
            return ithSmallest(arr, low, pivotIndex - 1, k);
        } else {
            return ithSmallest(arr, pivotIndex + 1, high, k - pivotIndex + low - 1);
        }
    }

    // Return -1 if k is out of range
    return -1;
}

int main() {
    int arr[] = {9, 7, 1, 2, 3, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 6; // Find the 6th smallest element

    int result = ithSmallest(arr, 0, n - 1, k);

    if (result != -1) {
        printf("The %dth smallest element is %d\n", k, result);
    } else {
        printf("Invalid value of k.\n");
    }

    return 0;
}