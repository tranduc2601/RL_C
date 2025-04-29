#include <stdio.h>

int main() {
    // khai bao 3 bien nguyen
    int a, b, c;

    // nhap 3 so nguyen tu ban phim
    printf("nhap so thu nhat: ");
    scanf("%d", &a);

    printf("nhap so thu hai: ");
    scanf("%d", &b);

    printf("nhap so thu ba: ");
    scanf("%d", &c);

    // kiem tra xem so thu ba co nam giua hai so dau tien khong
    if ((c > a && c < b) || (c > b && c < a)) {
        printf("so thu ba nam giua hai so dau tien\n");
    } else {
        printf("so thu ba khong nam giua hai so dau tien\n");
    }

    return 0;
}

