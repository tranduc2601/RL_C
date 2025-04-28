#include <stdio.h>

int main() {
    // khai bao bien
    int n;
    int hang_nghin, hang_tram, hang_chuc, hang_don_vi;
    int tong;

    // yeu cau nguoi dung nhap mot so nguyen co 4 chu so
    printf("nhap so nguyen co 4 chu so: ");
    scanf("%d", &n);

    // tach tung chu so
    hang_nghin = n / 1000;              // lay chu so hang nghin
    hang_tram = (n / 100) % 10;          // lay chu so hang tram
    hang_chuc = (n / 10) % 10;           // lay chu so hang chuc
    hang_don_vi = n % 10;                // lay chu so hang don vi

    // tinh tong cac chu so
    tong = hang_nghin + hang_tram + hang_chuc + hang_don_vi;

    // in ket qua
    printf("tong cac chu so la: %d\n", tong);

    return 0;
}

