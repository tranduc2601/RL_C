#include <stdio.h>
#include <stdlib.h>

void nhapMang(int **arr, int *n) {
    printf("Nhap so phan tu: ");
    scanf("%d", n);

    *arr = (int *)malloc(*n * sizeof(int));

    if (*arr == NULL) {
        printf("Khong cap phat duoc bo nho.\n");
        exit(1);
    }

    for (int i = 0; i < *n; i++) {
        printf("Phan tu thu %d: ", i);
        scanf("%d", (*arr + i));
    }
}

void hienThiMang(int *arr, int n) {
    printf("Cac phan tu trong mang: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int tinhTong(int *arr, int n) {
    int tong = 0;
    for (int i = 0; i < n; i++) {
        tong += *(arr + i);
    }
    return tong;
}

int timMax(int *arr, int n) {
    int max = *arr;
    for (int i = 1; i < n; i++) {
        if (*(arr + i) > max) {
            max = *(arr + i);
        }
    }
    return max;
}

int main() {
    int *mang = NULL;
    int soLuong = 0;
    int luaChon;

    do {
        printf("\n========== MENU ==========\n");
        printf("1. Nhap vao so phan tu va tung phan tu\n");
        printf("2. Hien thi cac phan tu trong mang\n");
        printf("3. Tinh do dai mang\n");
        printf("4. Tinh tong cac phan tu trong mang\n");
        printf("5. Hien thi phan tu lon nhat\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &luaChon);

        switch (luaChon) {
            case 1:
                free(mang);
                nhapMang(&mang, &soLuong);
                break;
            case 2:
                if (mang != NULL) {
                    hienThiMang(mang, soLuong);
                } else {
                    printf("Mang chua duoc nhap.\n");
                }
                break;
            case 3:
                printf("Do dai cua mang la: %d\n", soLuong);
                break;
            case 4:
                if (mang != NULL) {
                    printf("Tong cac phan tu la: %d\n", tinhTong(mang, soLuong));
                } else {
                    printf("Mang chua duoc nhap.\n");
                }
                break;
            case 5:
                if (mang != NULL) {
                    printf("Phan tu lon nhat la: %d\n", timMax(mang, soLuong));
                } else {
                    printf("Mang chua duoc nhap.\n");
                }
                break;
            case 6:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
        }

    } while (luaChon != 6);

    free(mang);
    return 0;
}

