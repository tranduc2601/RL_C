#include <stdio.h>

int main() {
    int n;

    // yeu cau nguoi dung nhap mot so tu 1 den 10
    printf("nhap mot so nguyen tu 1 den 10: ");
    scanf("%d", &n);

    // kiem tra dieu kien nhap
    if (n < 1 || n > 10) {
        printf("so khong hop le. vui long nhap so tu 1 den 10.\n");
        return 1; // ket thuc chuong trinh neu nhap sai
    }

    // in bang cuu chuong
    printf("bang cuu chuong cua %d:\n", n);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}

