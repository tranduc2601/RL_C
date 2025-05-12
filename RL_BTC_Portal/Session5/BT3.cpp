#include <stdio.h>

int main() {
    int n;
    int tong = 0;

    // yeu cau nguoi dung nhap so nguyen duong
    printf("nhap mot so nguyen duong: ");
    scanf("%d", &n);

    // kiem tra dieu kien nhap
    if (n <= 0) {
        printf("vui long nhap mot so nguyen duong.\n");
        return 1; // ket thuc chuong trinh neu nhap sai
    }

    // tinh tong tu 1 den n
    for (int i = 1; i <= n; i++) {
        tong += i;
    }

    // in ket qua
    printf("tong cac so tu 1 den %d la: %d\n", n, tong);

    return 0;
}

