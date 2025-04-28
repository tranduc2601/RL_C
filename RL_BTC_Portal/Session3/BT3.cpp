#include <stdio.h>

int main() {
    // khai bao hang so pi va bien ban kinh
    const float PI = 3.14;
    float r, chuVi, dienTich;

    // nhap ban kinh tu nguoi dung
    printf("nhap ban kinh hinh tron: ");
    scanf("%f", &r);

    // tinh chu vi va dien tich
    chuVi = 2 * PI * r;
    dienTich = PI * r * r;

    // hien thi ket qua voi 2 so thap phan
    printf("chu vi hinh tron: %.2f\n", chuVi);
    printf("dien tich hinh tron: %.2f\n", dienTich);

    return 0;
}

