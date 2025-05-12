#include <stdio.h>

int main() {
    int multiplier, multiplicand;

    // in ra bang cuu chuong tu 1 den 9
    for (multiplier = 1; multiplier <= 9; multiplier++) {
        printf("bang cuu chuong %d:\n", multiplier);
        for (multiplicand = 1; multiplicand <= 10; multiplicand++) {
            printf("%d x %d = %d\n", multiplier, multiplicand, multiplier * multiplicand);
        }
        printf("\n"); // xuong dong giua cac bang
    }

    return 0;
}

