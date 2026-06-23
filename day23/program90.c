#include <stdio.h>

int main() {
    int arr[] = {1, 5, 3, 4, 3, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                printf("First repeating element: %d\n", arr[i]);
                return 0;
            }
        }
    }

    printf("No repeating element found.\n");
    return 0;
}