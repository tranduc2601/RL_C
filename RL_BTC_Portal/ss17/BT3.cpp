#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 200

void nhapChuoi(char *str) {
    printf("Nhap chuoi: ");
    getchar(); // Xóa '\n' c?n l?i trong b? ð?m
    fgets(str, MAX, stdin);
    size_t len = strlen(str);
    if (str[len - 1] == '\n') str[len - 1] = '\0';
}

void inDaoNguoc(char *str) {
    int len = strlen(str);
    printf("Chuoi dao nguoc: ");
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", *(str + i));
    }
    printf("\n");
}

int demTu(char *str) {
    int dem = 0;
    char *p = str;

    while (*p) {
        while (*p && isspace(*p)) p++; // B? kho?ng tr?ng ð?u t?
        if (*p) {
            dem++;
            while (*p && !isspace(*p)) p++; // Ði h?t t? ðó
        }
    }
    return dem;
}

void soSanhDoDai(char *s1) {
    char s2[MAX];
    printf("Nhap chuoi khac de so sanh: ");
    getchar(); // Xóa '\n' trong b? ð?m
    fgets(s2, MAX, stdin);
    size_t len = strlen(s2);
    if (s2[len - 1] == '\n') s2[len - 1] = '\0';

    if (strlen(s2) > strlen(s1))
        printf("Chuoi moi dai hon chuoi ban dau.\n");
    else if (strlen(s2) < strlen(s1))
        printf("Chuoi moi ngan hon chuoi ban dau.\n");
    else
        printf("Hai chuoi co do dai bang nhau.\n");
}

void inHoaChuoi(char *str) {
    char *p = str;
    while (*p) {
        *p = toupper(*p);
        p++;
    }
    printf("Chuoi sau khi in hoa: %s\n", str);
}

void noiChuoi(char *str) {
    char them[MAX];
    printf("Nhap chuoi muon them: ");
    getchar(); // Xóa '\n'
    fgets(them, MAX, stdin);
    size_t len = strlen(them);
    if (them[len - 1] == '\n') them[len - 1] = '\0';

    strcat(str, them);
    printf("Chuoi sau khi them: %s\n", str);
}

int main() {
    char chuoi[MAX] = "";
    int luaChon;

    do {
        printf("\n========== MENU ==========\n");
        printf("1. Nhap vao chuoi\n");
        printf("2. In ra chuoi dao nguoc\n");
        printf("3. Dem so luong tu trong chuoi\n");
        printf("4. So sanh voi chuoi khac\n");
        printf("5. In hoa tat ca chu cai trong chuoi\n");
        printf("6. Them chuoi khac vao chuoi ban dau\n");
        printf("7. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &luaChon);

        switch (luaChon) {
            case 1:
                nhapChuoi(chuoi);
                break;
            case 2:
                inDaoNguoc(chuoi);
                break;
            case 3:
                printf("So tu trong chuoi: %d\n", demTu(chuoi));
                break;
            case 4:
                soSanhDoDai(chuoi);
                break;
            case 5:
                inHoaChuoi(chuoi);
                break;
            case 6:
                noiChuoi(chuoi);
                break;
            case 7:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long nhap lai.\n");
        }

    } while (luaChon != 7);

    return 0;
}

