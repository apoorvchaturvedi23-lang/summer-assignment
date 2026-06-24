#include <stdio.h>

void removeDuplicates(char str[]) {
    int seen[256] = {0};
    int j = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        unsigned char ch = str[i];

        if (!seen[ch]) {
            seen[ch] = 1;
            str[j++] = str[i];
        }
    }

    str[j] = '\0';
}

int main() {
    char str[] = "programming";

    removeDuplicates(str);

    printf("%s\n", str);
    return 0;
}