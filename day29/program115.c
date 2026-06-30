#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int choice;

    do {
        printf("\n===== STRING OPERATIONS MENU =====\n");
        printf("1. Enter String\n");
        printf("2. Find Length\n");
        printf("3. Copy String\n");
        printf("4. Concatenate Strings\n");
        printf("5. Compare Strings\n");
        printf("6. Reverse String\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // Clear newline from input buffer

        switch (choice) {

        case 1:
            printf("Enter first string: ");
            fgets(str1, sizeof(str1), stdin);
            str1[strcspn(str1, "\n")] = '\0';

            printf("Enter second string: ");
            fgets(str2, sizeof(str2), stdin);
            str2[strcspn(str2, "\n")] = '\0';
            break;

        case 2:
            printf("Length of first string = %lu\n", strlen(str1));
            break;

        case 3:
            strcpy(str2, str1);
            printf("Copied string: %s\n", str2);
            break;

        case 4:
            strcat(str1, str2);
            printf("Concatenated string: %s\n", str1);
            break;

        case 5:
            if (strcmp(str1, str2) == 0)
                printf("Both strings are equal.\n");
            else
                printf("Strings are not equal.\n");
            break;

        case 6:
            strrev(str1);   // Works in Turbo C/CodeBlocks (not standard GCC)
            printf("Reversed string: %s\n", str1);
            break;

        case 7:
            printf("Exiting program...\n");
            break;

        default:
            printf("Invalid choice!\n");
        }

    } while (choice != 7);

    return 0;
}