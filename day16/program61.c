#include <stdio.h>

int findMissing(int arr[], int size) {
    int n = size + 1;  // Total numbers should be n
    int expectedSum = n * (n + 1) / 2;
    int actualSum = 0;

    for (int i = 0; i < size; i++) {
        actualSum += arr[i];
    }

    return expectedSum - actualSum;
}

int main() {
    int arr[] = {1, 2, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Missing number: %d\n", findMissing(arr, size));

    return 0;
}