#include <stdio.h>

int main() {
    // Khai bao va khoi tao 2 bien so nguyen
    int a = 10;
    int b = 3;

    // Tinh tong, hieu, tich, thuong cua a va b
    int tong = a + b;      // Tong a + b
    int hieu = a - b;      // Hieu a - b
    int tich = a * b;      // Tich a * b
    float thuong = (float)a / b;  // Thuong a / b, ep kieu de ket qua chinh xac

    // In ket qua ra man hinh
    printf("Tong: %d\n", tong);
    printf("Hieu: %d\n", hieu);
    printf("Tich: %d\n", tich);
    printf("Thuong: %.2f\n", thuong);

    return 0;
}

