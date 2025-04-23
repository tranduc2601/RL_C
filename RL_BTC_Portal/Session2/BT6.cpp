#include <stdio.h>

int main() {
    // khai bao hang so pi va ban kinh hinh tron
    const float PI = 3.14;
    float banKinh = 6.0;

    // tinh chu vi hinh tron: chu vi = 2 * pi * ban kinh
    float chuVi = 2 * PI * banKinh;

    // tinh dien tich hinh tron: dien tich = pi * ban kinh * ban kinh
    float dienTich = PI * banKinh * banKinh;

    // in ket qua ra man hinh
    printf("ban kinh hinh tron: %.2f\n", banKinh);
    printf("chu vi hinh tron: %.2f\n", chuVi);
    printf("dien tich hinh tron: %.2f\n", dienTich);

    return 0;
}

