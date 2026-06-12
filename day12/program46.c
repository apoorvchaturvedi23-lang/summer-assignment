#include <math.h>

int isArmstrong(int n) {
    int original = n;
    int digits = 0;
    int sum = 0;
    int temp = n;

    // Count digits
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = n;

    // Calculate sum of digits^digits
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    return sum == original;
}