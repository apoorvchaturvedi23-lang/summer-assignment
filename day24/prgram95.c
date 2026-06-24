#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "I love programming in C";

    int maxLen = 0, currLen = 0;
    int start = 0, maxStart = 0;

    for (int i = 0; ; i++) {
        if (str[i] != ' ' && str[i] != '\0') {
            if (currLen == 0)
                start = i;
            currLen++;
        } else {
            if (currLen > maxLen) {
                maxLen = currLen;
                maxStart = start;
            }
            currLen = 0;

            if (str[i] == '\0')
                break;
        }
    }

    printf("Longest word: ");
    for (int i = maxStart; i < maxStart + maxLen; i++) {
        putchar(str[i]);
    }
    printf("\n");

    return 0;
}