#include <stdio.h>

void tinhTong(int *x, int *y, int *ketQua) {
    *ketQua = *x + *y;
}

int main() {
    int a = 16;
    int b = 61;
    int tong = 0;

    tinhTong(&a, &b, &tong);

    printf("Tong cua %d va %d la: %d\n", a, b, tong);

    return 0;
}

