#include <stdio.h>

int main() {
    int n, original, rev = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while (n > 0) {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }

    if (rev == original)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}