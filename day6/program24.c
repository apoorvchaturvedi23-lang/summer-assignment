#include <stdio.h>

int main() {
    int x, n;
    long long result = 1;

    scanf("%d %d", &x, &n);

    for (int i = 0; i < n; i++) {
        result *= x;
    }

    printf("%lld", result);

    return 0;
}