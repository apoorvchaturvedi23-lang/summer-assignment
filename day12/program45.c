#include <stdio.h>

int isPalindrome(int n) {
    int original = n;
    int reverse = 0;

    while (n > 0) {
        reverse = reverse * 10 + (n % 10);
        n /= 10;
    }

    return original == reverse;
}

int main() {
    int n;
    scanf("%d", &n);

    if (isPalindrome(n))
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}