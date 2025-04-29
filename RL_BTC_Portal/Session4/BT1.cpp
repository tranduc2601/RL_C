#include <stdio.h>

int main() {
    // khai bao bien
    int n;

    // nhap mot so nguyen tu ban phim
    printf("nhap mot so nguyen: ");
    scanf("%d", &n);

    // kiem tra va in ket qua
    if (n > 0) {
        printf("so %d la so duong\n", n);
    } else if (n < 0) {
        printf("so %d la so am\n", n);
    } else {
        printf("so nhap vao la 0\n");
    }

    return 0;
}

