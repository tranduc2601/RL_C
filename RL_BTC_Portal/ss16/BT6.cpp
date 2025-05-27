#include <stdio.h>

int timKiem(int *arr, int kichThuoc, int giaTriCanTim) {
    for (int i = 0; i < kichThuoc; i++) {
        if (arr[i] == giaTriCanTim) {
            return i;
        }
    }
    return -1;
}

int main() {
    int mang[] = {3, 5, 7, 9, 11, 13};
    int kichThuoc = sizeof(mang) / sizeof(mang[0]);
    int giaTri = 9;

    int viTri = timKiem(mang, kichThuoc, giaTri);

    if (viTri != -1) {
        printf("Gia tri %d duoc tim thay tai vi tri %d\n", giaTri, viTri);
    } else {
        printf("Gia tri %d khong co trong mang\n", giaTri);
    }

    return 0;
}

