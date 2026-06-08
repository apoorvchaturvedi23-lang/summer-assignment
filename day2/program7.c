#include <stdio.h>

int main() {
    int n;
    int product = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
        n = -n;  

    while (n > 0) {
        product *= n % 10;
        n /= 10;
    }

    printf("Product of digits = %d\n", product);

    return 0;
}