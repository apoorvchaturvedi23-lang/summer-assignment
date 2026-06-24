#include <stdio.h>
#include <string.h>

int isRotation(char *s1, char *s2) {
    int n1 = strlen(s1);
    int n2 = strlen(s2);

    if (n1 != n2)
        return 0;

    char temp[2 * n1 + 1];
    strcpy(temp, s1);
    strcat(temp, s1);

    return strstr(temp, s2) != NULL;
}

int main() {
    char s1[] = "abcd";
    char s2[] = "cdab";

    if (isRotation(s1, s2))
        printf("Rotation\n");
    else
        printf("Not Rotation\n");

    return 0;
}