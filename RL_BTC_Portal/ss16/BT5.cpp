#include <stdio.h>

void capNhatPhanTu(int *arr, int viTri, int giaTriMoi) {
    arr[viTri] = giaTriMoi;
}

void inMang(int *arr, int kichThuoc) {
    for (int i = 0; i < kichThuoc; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int mang[] = {10, 20, 30, 40, 50};
    int kichThuoc = sizeof(mang) / sizeof(mang[0]);

    printf("Mang ban dau:\n");
    inMang(mang, kichThuoc);

    capNhatPhanTu(mang, 2, 99);

    printf("Mang sau khi cap nhat:\n");
    inMang(mang, kichThuoc);

    return 0;
}

