#include <stdio.h>

int main() {
    int a = 10;
    int *p = &a;

    printf("Gia tri cua a (cach 1 - truc tiep): %d\n", a);
    printf("Gia tri cua a (cach 2 - qua con tro): %d\n", *p);

    printf("Dia chi cua a (cach 1 - dung toan tu &): %p\n", &a);
    printf("Dia chi cua a (cach 2 - in con tro): %p\n", p);

    return 0;
}

