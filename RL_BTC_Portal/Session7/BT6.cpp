#include <stdio.h>

int main() {
    int numbers[5] = {10, 25, 30, 7, 18};
    for (int i = 0; i < 5; i++) {
        if (numbers[i] % 2 == 0) {
            numbers[i] += 3;
        } else {
            numbers[i] += 2;
        }
    }
    printf("Mang sau khi thay doi:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }

    printf("\n");

    return 0;
}

