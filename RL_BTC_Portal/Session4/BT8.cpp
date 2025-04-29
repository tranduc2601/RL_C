#include <stdio.h>

int main() {
    // khai bao 3 bien luu do dai 3 canh tam giac
    float a, b, c;

    // nhap do dai 3 canh tu ban phim
    printf("nhap do dai canh a: ");
    scanf("%f", &a);
    printf("nhap do dai canh b: ");
    scanf("%f", &b);
    printf("nhap do dai canh c: ");
    scanf("%f", &c);

    // kiem tra dieu kien tao thanh tam giac
    if (a + b > c && a + c > b && b + c > a) {
        printf("la 3 canh tam giac\n");
    } else {
        printf("khong phai 3 canh tam giac\n");
    }

    return 0;
}

