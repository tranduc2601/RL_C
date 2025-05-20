#include <stdio.h>

int main() {
    int arr[100];
    int n, currentLength;

    printf("Nhap so phan tu muon nhap (toi da 100): ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("So phan tu khong hop le.\n");
        return 1;
    }

    currentLength = n;

    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i);
        scanf("%d", &arr[i]);
    }

    int deleteIndex;
    printf("Nhap vi tri muon xoa: ");
    scanf("%d", &deleteIndex);

    if (deleteIndex < 0 || deleteIndex >= currentLength) {
        printf("Vi tri xoa khong hop le.\n");
        return 1;
    }

    for (int i = deleteIndex; i < currentLength - 1; i++) {
        arr[i] = arr[i + 1];
    }

    currentLength--;

    printf("Mang sau khi xoa:\n");
    for (int i = 0; i < currentLength; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}

