#include <stdio.h>

int tinhTong(int a, int b) {
    return a + b;
}

int main() {
    int x, y, tong;
    printf("Nhap so thu nhat: ");
    scanf("%d", &x);
    printf("Nhap so thu hai: ");
    scanf("%d", &y);

    tong = tinhTong(x, y);

    printf("Tong = %d\n", tong);

    return 0;
}

