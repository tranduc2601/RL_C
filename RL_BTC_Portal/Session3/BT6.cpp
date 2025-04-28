#include <stdio.h>

int main() {
    // khai bao bien
    float day, chieu_cao, dien_tich;

    // yeu cau nguoi dung nhap vao do dai day va chieu cao
    printf("nhap do dai day cua tam giac: ");
    scanf("%f", &day);

    printf("nhap chieu cao cua tam giac: ");
    scanf("%f", &chieu_cao);

    // tinh dien tich tam giac
    dien_tich = (day * chieu_cao) / 2;

    // hien thi ket qua
    printf("dien tich cua tam giac la: %.2f\n", dien_tich);

    return 0;
}

