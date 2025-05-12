#include <stdio.h>

int main() {
    int number, oddSum = 0;

    printf("Nhap vao 5 so nguyen:\n");

    for (int i = 1; i <= 5; i++) {
        printf("So thu %d: ", i);
        scanf("%d", &number);

        if (number % 2 != 0) {
            oddSum += number;
        }
    }

    printf("Tong cac so le la: %d\n", oddSum);

    return 0;
}

