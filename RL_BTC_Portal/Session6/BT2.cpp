#include <stdio.h>

int main() {
    int number, evenCount = 0, oddCount = 0;

    printf("Nhap vao 5 so nguyen:\n");

    for (int i = 1; i <= 5; i++) {
        printf("So thu %d: ", i);
        scanf("%d", &number);

        if (number % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    printf("So luong so chan la: %d\n", evenCount);
    printf("So luong so le la: %d\n", oddCount);

    return 0;
}

