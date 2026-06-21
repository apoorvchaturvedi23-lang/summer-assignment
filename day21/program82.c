#include <stdio.h>

int main() {
    char str[] = "Hello";
    int len = 0;

    while (str[len] != '\0')
        len++;

    int i = 0, j = len - 1;
    while (i < j) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }

    printf("Reversed string: %s\n", str);
    return 0;
}