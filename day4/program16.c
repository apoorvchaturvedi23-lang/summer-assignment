#include <stdio.h>
#include <math.h>

int main() {
    int start, end;

    printf("Enter range (start end): ");
    scanf("%d %d", &start, &end);

    for (int num = start; num <= end; num++) {
        int temp = num, digits = 0;
        int sum = 0;

        // Count digits
        while (temp != 0) {
            digits++;
            temp /= 10;
        }

        temp = num;

        // Calculate Armstrong sum
        while (temp != 0) {
            int digit = temp % 10;
            sum += pow(digit, digits);
            temp /= 10;
        }

        if (sum == num)
            printf("%d ", num);
    }

    return 0;
}