#include <stdio.h>

void inMang(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int mang[] = {4, 7, 2, 9, 1, 5};
    int kichThuoc = sizeof(mang) / sizeof(mang[0]);

    inMang(mang, kichThuoc);

    return 0;
}

