#include <stdio.h>

int main() {
    int arr[3][4] = {
        {12, 7, 9, 21},
        {4, 18, 6, 10},
        {15, 2, 30, 8}
    };

    int max = arr[0][0];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }

    printf("Phan tu lon nhat trong mang la: %d\n", max);

    return 0;
}

