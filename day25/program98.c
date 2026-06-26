#include <stdio.h>

int main() {
    char str1[] = "apple";
    char str2[] = "plane";

    printf("Common characters: ");

    for (int i = 0; str1[i] != '\0'; i++) {
        for (int j = 0; str2[j] != '\0'; j++) {
            if (str1[i] == str2[j]) {
                printf("%c ", str1[i]);
                break;  // Avoid printing the same character multiple times for this occurrence
            }
        }
    }

    return 0;
}