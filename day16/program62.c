#include <stdio.h>

int main() {
    int arr[] = {1, 2, 2, 3, 1, 2, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxFreq = 0, maxElement;

    for (int i = 0; i < n; i++) {
        int freq = 0;

        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                freq++;
            }
        }

        if (freq > maxFreq) {
            maxFreq = freq;
            maxElement = arr[i];
        }
    }

    printf("Element with maximum frequency: %d\n", maxElement);
    printf("Frequency: %d\n", maxFreq);

    return 0;
}