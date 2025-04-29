#include <stdio.h>

int main() {
    // khai bao bien
    int n;

    // nhap mot so nguyen tu ban phim
    printf("nhap mot so nguyen: ");
    scanf("%d", &n);

    // kiem tra dieu kien chia het
    if (n % 3 == 0 && n % 5 == 0) {
        printf("so %d chia het cho ca 3 va 5\n", n);
    } else if (n % 3 == 0) {
        printf("so %d chia het cho 3\n", n);
    } else if (n % 5 == 0) {
        printf("so %d chia het cho 5\n", n);
    } else {
        printf("so %d khong chia het cho 3 va cung khong chia het cho 5\n", n);
    }

    return 0;
}

