#include <stdio.h>

int main() {
    // khai bao bien
    int thang;

    // nhap so thang tu ban phim
    printf("nhap so thang (1-12): ");
    scanf("%d", &thang);

    // kiem tra va in ra so ngay cua thang
    if (thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12) {
        printf("thang %d co 31 ngay\n", thang);
    } else if (thang == 4 || thang == 6 || thang == 9 || thang == 11) {
        printf("thang %d co 30 ngay\n", thang);
    } else if (thang == 2) {
        printf("thang 2 co 28 hoac 29 ngay\n");
    } else {
        // thang khong hop le
        printf("so thang khong hop le\n");
    }

    return 0;
}

