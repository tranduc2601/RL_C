#include <stdio.h>

int laSoNguyenTo(int n) {
    if (n < 2) {
        return 0;
    }

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int a, b;

    printf("Nhap so thu nhat: ");
    scanf("%d", &a);

    printf("Nhap so thu hai: ");
    scanf("%d", &b);

    if (laSoNguyenTo(a)) {
        printf("%d la so nguyen to\n", a);
    } else {
        printf("%d khong phai la so nguyen to\n", a);
    }

    if (laSoNguyenTo(b)) {
        printf("%d la so nguyen to\n", b);
    } else {
        printf("%d khong phai la so nguyen to\n", b);
    }

    return 0;
}

