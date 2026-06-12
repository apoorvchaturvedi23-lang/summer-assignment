#include <stdio.h>

int main() {
    int n, count = 0;
    scanf("%d", &n);

    while (n > 0) {
        count += (n & 1);  // check last bit
        n >>= 1;           // shift right
    }

    printf("%d", count);

    return 0;
}