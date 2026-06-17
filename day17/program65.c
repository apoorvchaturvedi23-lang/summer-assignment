#include <stdio.h>

int main() {
    int arr1[] = {1, 2, 3};
    int arr2[] = {4, 5, 6};

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    int merged[n1 + n2];

    // Copy first array
    for (int i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }

    // Copy second array
    for (int i = 0; i < n2; i++) {
        merged[n1 + i] = arr2[i];
    }

    // Print merged array
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}