#include <stdio.h>

int main() {
    int rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (int i = rows; i >= 1; i--) {
        // Print leading spaces
        for (int j = 0; j < rows - i; j++) {
            printf(" ");
        }

        // Print stars
        for (int j = 0; j < 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}