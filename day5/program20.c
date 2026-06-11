#include <stdio.h>

int main() {
    long long n;
    int largest = 0;

    printf("Enter a number: ");
    scanf("%lld", &n);

    for (int i = 2; i <= n; i++) {
        while (n % i == 0) {
            largest = i;
            n /= i;
        }
    }

    printf("Largest Prime Factor = %d\n", largest);

    return 0;
}