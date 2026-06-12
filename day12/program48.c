#include <stdio.h>

// Function to check perfect number
int isPerfect(int n) {
    int sum = 0;

    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    return sum == n;
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (isPerfect(n)) {
        printf("%d is a Perfect Number\n", n);
    } else {
        printf("%d is not a Perfect Number\n", n);
    }

    return 0;
}