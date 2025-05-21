#include <stdio.h>

int timUCLN(int a, int b) {
    while (a != b) {
        if (a > b) {
            a = a - b;
        } else {
            b = b - a;
        }
    }
    return a;
}

int main() {
    int x = 28;
    int y = 42;

    int ucln = timUCLN(x, y);

    printf("Uoc chung lon nhat cua %d va %d la: %d\n", x, y, ucln);

    return 0;
}

