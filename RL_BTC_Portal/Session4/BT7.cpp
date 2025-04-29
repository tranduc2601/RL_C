#include <stdio.h>

int main() {
    // khai bao bien nam
    int nam;

    // nhap nam tu ban phim
    printf("nhap vao mot nam: ");
    scanf("%d", &nam);

    // kiem tra nam nhuan
    if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0)) {
        printf("%d la nam nhuan\n", nam);
    } else {
        printf("%d khong phai la nam nhuan\n", nam);
    }

    return 0;
}

