#include <stdio.h>

void sapXep(int *arr, int kichThuoc) {
    for (int i = 0; i < kichThuoc - 1; i++) {
        for (int j = 0; j < kichThuoc - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void inMang(int *arr, int kichThuoc) {
    for (int i = 0; i < kichThuoc; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int mang[] = {12, 5, 8, 3, 17, 1};
    int kichThuoc = sizeof(mang) / sizeof(mang[0]);

    printf("Mang ban dau:\n");
    inMang(mang, kichThuoc);

    sapXep(mang, kichThuoc);

    printf("Mang sau khi sap xep:\n");
    inMang(mang, kichThuoc);

    return 0;
}

