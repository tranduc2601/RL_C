#include <stdio.h>

int timMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int mang[] = {3, 15, 7, 22, 9, 5};
    int kichThuoc = sizeof(mang) / sizeof(mang[0]);

    int lonNhat = timMax(mang, kichThuoc);

    printf("So lon nhat trong mang la: %d\n", lonNhat);

    return 0;
}

