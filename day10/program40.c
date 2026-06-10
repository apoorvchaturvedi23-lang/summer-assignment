#include <stdio.h>

int main() {
    int rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (int i = 0; i < rows; i++) {
        // Print spaces
        for (int j = 0; j < rows - i - 1; j++) {
            printf(" ");
        }

        // Print characters
        for (char ch = 'A'; ch <= 'A' + i; ch++) {
            printf("%c ", ch);
        }

        printf("\n");
    }

    return 0;
}