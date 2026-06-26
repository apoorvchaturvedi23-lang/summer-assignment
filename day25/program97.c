#include <stdio.h>

void mergeSortedArrays(int arr1[], int n, int arr2[], int m, int result[]) {
    int i = 0, j = 0, k = 0;

    // Merge while both arrays have elements
    while (i < n && j < m) {
        if (arr1[i] <= arr2[j]) {
            result[k++] = arr1[i++];
        } else {
            result[k++] = arr2[j++];
        }
    }

    // Copy remaining elements of arr1
    while (i < n) {
        result[k++] = arr1[i++];
    }

    // Copy remaining elements of arr2
    while (j < m) {
        result[k++] = arr2[j++];
    }
}

int main() {
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8};

    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);

    int result[n + m];

    mergeSortedArrays(arr1, n, arr2, m, result);

    printf("Merged Array: ");
    for (int i = 0; i < n + m; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}