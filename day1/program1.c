#include <stdio.h>

int main() {
    int n, i, num;
    int sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        sum += num;
    }

    printf("Sum = %d\n", sum);

    return 0;
}