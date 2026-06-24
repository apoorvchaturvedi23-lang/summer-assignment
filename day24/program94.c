#include <stdio.h>
#include <string.h>

void compressString(char str[]) {
    int n = strlen(str);

    for (int i = 0; i < n; ) {
        char ch = str[i];
        int count = 0;

        while (i < n && str[i] == ch) {
            count++;
            i++;
        }

        printf("%c%d", ch, count);
    }
}

int main() {
    char str[] = "aaabbccccd";
    compressString(str);
    return 0;
}