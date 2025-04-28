#include <stdio.h>

int main() {
    // khai bao bien
    int n;
    int so_dao = 0;

    // yeu cau nguoi dung nhap mot so nguyen co 4 chu so
    printf("nhap so nguyen co 4 chu so: ");
    scanf("%d", &n);

    // dao nguoc so
    while (n != 0) {
        int chu_so = n % 10;      // lay chu so cuoi cung
        so_dao = so_dao * 10 + chu_so;  // ghep chu so vao so_dao
        n /= 10;                  // bo chu so cuoi cung di
    }

    // in ket qua
    printf("so nghich dao la: %d\n", so_dao);

    return 0;
}

