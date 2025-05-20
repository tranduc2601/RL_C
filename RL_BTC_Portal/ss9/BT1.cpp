#include <stdio.h>

int main() {
    int arr[100];          // Khai bao mang 100 phan tu
    int currentLength = 0; // Bien luu so luong phan tu hien tai
    int num, i;

    // Nguoi dung nhap so luong phan tu ban dau
    printf("Nhap so luong phan tu ban dau (toi da 100): ");
    scanf("%d", &num);

    // Kiem tra gia tri nhap vao co hop le khong
    if (num < 0 || num > 100) {
        printf("So luong phan tu khong hop le.\n");
        return 1;
    }

    // Nguoi dung nhap cac phan tu cua mang
    for (i = 0; i < num; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    currentLength = num; // Cap nhat so luong phan tu hien co

    // Nguoi dung nhap vi tri va gia tri muon chen
    int addIndex, addValue;
    printf("Nhap vi tri muon chen (0 - 100): ");
    scanf("%d", &addIndex);

    // Kiem tra vi tri co hop le khong
    if (addIndex < 0 || addIndex > 100) {
        printf("Vi tri chen khong hop le.\n");
        return 1;
    }

    printf("Nhap gia tri muon chen: ");
    scanf("%d", &addValue);

    // Neu vi tri chen >= so phan tu hien tai -> gan truc tiep
    if (addIndex >= currentLength) {
        arr[addIndex] = addValue;
        currentLength = addIndex + 1;
    } else {
        // Dich cac phan tu tu vi tri addIndex ve sau 1 vi tri
        for (i = currentLength; i > addIndex; i--) {
            arr[i] = arr[i - 1];
        }
        // Chen gia tri vao vi tri mong muon
        arr[addIndex] = addValue;
        currentLength++;
    }

    // In mang sau khi chen
    printf("Mang sau khi chen:\n");
    for (i = 0; i < currentLength; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

