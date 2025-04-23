#include <stdio.h>

int main() {
    // khai bao va gan gia tri cho bien canh hinh vuong
    float canh = 5.0;

    // tinh chu vi hinh vuong: chu vi = 4 * canh
    float chuVi = 4 * canh;

    // tinh dien tich hinh vuong: dien tich = canh * canh
    float dienTich = canh * canh;

    // in ket qua ra man hinh
    printf("canh hinh vuong: %.2f\n", canh);
    printf("chu vi hinh vuong: %.2f\n", chuVi);
    printf("dien tich hinh vuong: %.2f\n", dienTich);

    return 0;
}

