#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 100

void nhapChuoi(char *str) {
    printf("Nhap chuoi: ");
    getchar();  // Xóa k? t? '\n' c?n l?i trong b? ð?m sau scanf
    fgets(str, MAX, stdin);
    size_t len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
}

void inChuoi(char *str) {
    printf("Chuoi da nhap: %s\n", str);
}

int demChuCai(char *str) {
    int dem = 0;
    char *p = str;
    while (*p) {
        if (isalpha(*p)) {
            dem++;
        }
        p++;
    }
    return dem;
}

int demChuSo(char *str) {
    int dem = 0;
    char *p = str;
    while (*p) {
        if (isdigit(*p)) {
            dem++;
        }
        p++;
    }
    return dem;
}

int demKyTuDacBiet(char *str) {
    int dem = 0;
    char *p = str;
    while (*p) {
        if (!isalnum(*p) && !isspace(*p)) {
            dem++;
        }
        p++;
    }
    return dem;
}

int main() {
    char chuoi[MAX] = "";
    int luaChon;

    do {
        printf("\n========== MENU ==========\n");
        printf("1. Nhap vao chuoi\n");
        printf("2. In ra chuoi\n");
        printf("3. Dem so luong chu cai trong chuoi\n");
        printf("4. Dem so luong chu so trong chuoi\n");
        printf("5. Dem so luong ky tu dac biet trong chuoi\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &luaChon);

        switch (luaChon) {
            case 1:
                nhapChuoi(chuoi);
                break;
            case 2:
                inChuoi(chuoi);
                break;
            case 3:
                printf("So chu cai: %d\n", demChuCai(chuoi));
                break;
            case 4:
                printf("So chu so: %d\n", demChuSo(chuoi));
                break;
            case 5:
                printf("So ky tu dac biet: %d\n", demKyTuDacBiet(chuoi));
                break;
            case 6:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
        }

    } while (luaChon != 6);

    return 0;
}

