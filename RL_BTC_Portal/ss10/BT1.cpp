#include <stdio.h>

int main() {
    int arr[] = {5, 12, 7, 9, 21, 33, 7, 18};
    int size = sizeof(arr) / sizeof(arr[0]);
    int x, found = 0;

    printf("Nhap phan tu can tim: ");
    scanf("%d", &x);

    for (int i = 0; i < size; i++) {
        if (arr[i] == x) {
            printf("Phan tu %d xuat hien tai vi tri %d\n", x, i);
            found = 1;
        }
    }

    if (!found) {
        printf("Phan tu %d khong ton tai trong mang.\n", x);
    }

    return 0;
}

