#include <stdio.h>

int main() {
    int numbers[5] = {3, 7, 8, 11, 15};
    int hasEven = 0;

    printf("Cac so chan trong mang:\n");
    for (int i = 0; i < 5; i++) {
        if (numbers[i] % 2 == 0) {
            printf("%d ", numbers[i]);
            hasEven = 1;
        }
    }

    if (!hasEven) {
        printf("Mang khong chua so chan.");
    }

    printf("\n");
    return 0;
}

