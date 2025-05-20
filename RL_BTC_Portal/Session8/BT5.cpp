#include <stdio.h>

int main() {
    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    int rows = 3, cols = 4;
    int sum = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1) {
                sum += arr[i][j];
            }
        }
    }

    printf("Tong cac phan tu tren duong bien la: %d\n", sum);

    return 0;
}

