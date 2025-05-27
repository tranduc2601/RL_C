#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


bool laSoNguyenTo(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}


void nhapMang(int **arr, int *n) {
    printf("Nhap so phan tu: ");
    scanf("%d", n);
    *arr = (int *)malloc((*n) * sizeof(int));

    for (int i = 0; i < *n; i++) {
        printf("Phan tu [%d]: ", i);
        scanf("%d", *arr + i);
    }
}
void inSoChan(int *arr, int n) {
    printf("Cac phan tu chan: ");
    for (int i = 0; i < n; i++) {
        if (*(arr + i) % 2 == 0)
            printf("%d ", *(arr + i));
    }
    printf("\n");
}

void inSoNguyenTo(int *arr, int n) {
    printf("Cac so nguyen to: ");
    for (int i = 0; i < n; i++) {
        if (laSoNguyenTo(*(arr + i)))
            printf("%d ", *(arr + i));
    }
    printf("\n");
}

void daoNguocMang(int *arr, int n) {
    for (int i = 0; i < n / 2; i++) {
        int tmp = *(arr + i);
        *(arr + i) = *(arr + n - 1 - i);
        *(arr + n - 1 - i) = tmp;
    }
    printf("Mang sau khi dao nguoc: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}


void sapXepMang(int *arr, int n, int tangDan) {
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++) {
            if ((tangDan && *(arr + i) > *(arr + j)) ||
                (!tangDan && *(arr + i) < *(arr + j))) {
                int tmp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = tmp;
            }
        }

    printf("Mang sau khi sap xep: ");
    for (int i = 0; i < n; i++)
        printf("%d ", *(arr + i));
    printf("\n");
}


void timKiem(int *arr, int n) {
    int x, found = 0;
    printf("Nhap gia tri can tim: ");
    scanf("%d", &x);
    for (int i = 0; i < n; i++) {
        if (*(arr + i) == x) {
            printf("Tim thay %d tai vi tri %d\n", x, i);
            found = 1;
        }
    }
    if (!found)
        printf("Khong tim thay %d trong mang.\n", x);
}

int main() {
    int *mang = NULL;
    int n = 0, chon;

    do {
        printf("\n========= MENU =========\n");
        printf("1. Nhap vao so phan tu va tung phan tu\n");
        printf("2. In ra cac phan tu chan\n");
        printf("3. In ra cac so nguyen to\n");
        printf("4. Dao nguoc mang\n");
        printf("5. Sap xep mang\n");
        printf("6. Tim kiem phan tu trong mang\n");
        printf("7. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &chon);

        switch (chon) {
            case 1:
                free(mang);
                nhapMang(&mang, &n);
                break;
            case 2:
                if (mang) inSoChan(mang, n);
                else printf("Vui long nhap mang truoc!\n");
                break;
            case 3:
                if (mang) inSoNguyenTo(mang, n);
                else printf("Vui long nhap mang truoc!\n");
                break;
            case 4:
                if (mang) daoNguocMang(mang, n);
                else printf("Vui long nhap mang truoc!\n");
                break;
            case 5:
                if (mang) {
                    int luaChonSort;
                    printf("=== SAP XEP ===\n");
                    printf("1. Tang dan\n");
                    printf("2. Giam dan\n");
                    printf("Lua chon: ");
                    scanf("%d", &luaChonSort);
                    if (luaChonSort == 1)
                        sapXepMang(mang, n, 1);
                    else if (luaChonSort == 2)
                        sapXepMang(mang, n, 0);
                    else
                        printf("Lua chon khong hop le.\n");
                } else {
                    printf("Vui long nhap mang truoc!\n");
                }
                break;
            case 6:
                if (mang) timKiem(mang, n);
                else printf("Vui long nhap mang truoc!\n");
                break;
            case 7:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le!\n");
        }
    } while (chon != 7);

    free(mang);
    return 0;
}

