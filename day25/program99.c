#include <stdio.h>
#include <string.h>

int main() {
    char names[5][20] = {
        "Ravi",
        "Amit",
        "Neha",
        "Priya",
        "Karan"
    };

    int n = 5;
    char temp[20];

    // Bubble sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(names[j], names[j + 1]) > 0) {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }

    printf("Names in alphabetical order:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}