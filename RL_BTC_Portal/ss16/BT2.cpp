#include <stdio.h>

void doiGiaTri(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a = 5;
    int b = 10;

    printf("Truoc khi doi:\n");
    printf("a = %d, b = %d\n", a, b);

    doiGiaTri(&a, &b);

    printf("Sau khi doi:\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}

