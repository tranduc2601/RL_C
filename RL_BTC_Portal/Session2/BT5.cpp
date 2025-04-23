#include <stdio.h>

int main() {
    // khai bao va gan gia tri cho chieu dai va chieu rong
    float chieuDai = 8;
    float chieuRong = 4;

    // tinh chu vi hinh chu nhat: chu vi = (chieu dai + chieu rong) * 2
    float chuVi = (chieuDai + chieuRong) * 2;

    // tinh dien tich hinh chu nhat: dien tich = chieu dai * chieu rong
    float dienTich = chieuDai * chieuRong;

    // in ket qua ra man hinh
    printf("chieu dai: %.2f\n", chieuDai);
    printf("chieu rong: %.2f\n", chieuRong);
    printf("chu vi hinh chu nhat: %.2f\n", chuVi);
    printf("dien tich hinh chu nhat: %.2f\n", dienTich);

    return 0;
}

