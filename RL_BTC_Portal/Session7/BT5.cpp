#include <stdio.h>

int main() {
    int numbers[5] = {10, 25, 3, 7, 18};
    int max = numbers[0], min = numbers[0];

    for (int i = 1; i < 5; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
        if (numbers[i] < min) {
            min = numbers[i];
        }
    }

    printf("Phan tu lon nhat trong mang: %d\n", max);
    printf("Phan tu nho nhat trong mang: %d\n", min);

    return 0;
}

