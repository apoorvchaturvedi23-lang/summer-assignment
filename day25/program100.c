#include <stdio.h>
#include <string.h>

int main() {
    char words[5][20] = {
        "banana",
        "cat",
        "elephant",
        "dog",
        "apple"
    };

    int n = 5;
    char temp[20];

    // Bubble sort by length
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strlen(words[j]) > strlen(words[j + 1])) {
                strcpy(temp, words[j]);
                strcpy(words[j], words[j + 1]);
                strcpy(words[j + 1], temp);
            }
        }
    }

    printf("Words sorted by length:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", words[i]);
    }

    return 0;
}