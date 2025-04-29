#include <stdio.h>

int main() {
    // khai bao bien
    int n;

    // nhap mot so nguyen tu ban phim
    printf("nhap mot so nguyen: ");
    scanf("%d", &n);

    // kiem tra so chan hay le
    if (n % 2 == 0) {
        printf("so %d la so chan\n", n);
    } else {
        printf("so %d la so le\n", n);
    }

    return 0;
}

