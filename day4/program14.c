#include <stdio.h>

int main() {
    int n;
    long long a = 0, b = 1, c;

    printf("Enter n: ");
    scanf("%d", &n);

    if (n == 0)
        printf("Fibonacci term at position 0 = 0\n");
    else if (n == 1)
        printf("Fibonacci term at position 1 = 1\n");
    else {
        for (int i = 2; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        printf("Fibonacci term at position %d = %lld\n", n, b);
    }

    return 0;
}