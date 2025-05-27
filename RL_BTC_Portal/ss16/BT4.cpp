#include <stdio.h>

void inMang(int *arr, int kichThuoc) {
    for (int i = 0; i < kichThuoc; i++) {
        printf("Phan tu thu %d: %d\n", i, *(arr + i));
    }
}

int main() {
    int mang[] = {2, 6, 0, 1, 200, 6};
    int kichThuoc = sizeof(mang) / sizeof(mang[0]);

    inMang(mang, kichThuoc);

    return 0;
}

