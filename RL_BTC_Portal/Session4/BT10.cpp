#include <stdio.h>

int main() {
    // khai bao bien
    int a, b, c, temp;

    // nhap 3 so nguyen
    printf("nhap so thu nhat: ");
    scanf("%d", &a);
    printf("nhap so thu hai: ");
    scanf("%d", &b);
    printf("nhap so thu ba: ");
    scanf("%d", &c);

    // sap xep 3 so theo thu tu tang dan
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (a > c) {
        temp = a;
        a = c;
        c = temp;
    }
    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }

    // in ket qua
    printf("thu tu tang dan: %d %d %d\n", a, b, c);

    return 0;
}

