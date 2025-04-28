	#include <stdio.h>

int main() {
    // khai bao bien nhiet do celsius va fahrenheit
    float celsius, fahrenheit;

    // nhap nhiet do celsius tu nguoi dung
    printf("nhap nhiet do (do celsius): ");
    scanf("%f", &celsius);

    // chuyen doi sang do fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;

    // hien thi ket qua
    printf("nhiet do theo do fahrenheit la: %.2f\n", fahrenheit);

    return 0;
}

