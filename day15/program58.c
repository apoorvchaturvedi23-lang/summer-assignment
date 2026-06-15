#include <stdio.h>

void leftRotate(int arr[], int n, int d) {
    d = d % n;  // Handle rotations greater than array size

    int temp[d];

    // Store first d elements
    for (int i = 0; i < d; i++) {
        temp[i] = arr[i];
    }

    // Shift remaining elements left
    for (int i = d; i < n; i++) {
        arr[i - d] = arr[i];
    }

    // Copy stored elements to the end
    for (int i = 0; i < d; i++) {
        arr[n - d + i] = temp[i];
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int d = 2;

    leftRotate(arr, n, d);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}