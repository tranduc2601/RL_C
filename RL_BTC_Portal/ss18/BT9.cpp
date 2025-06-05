#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Student {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};

void hienThiDanhSach(struct Student students[], int count) {
    if (count == 0) {
        printf("Danh sach rong.\n");
        return;
    }
    for (int i = 0; i < count; i++) {
        printf("ID: %d\n", students[i].id);
        printf("Ten: %s", students[i].name);
        printf("Tuoi: %d\n", students[i].age);
        printf("So dien thoai: %s", students[i].phoneNumber);
        printf("\n");
    }
}

void themSinhVien(struct Student students[], int *count) {
    if (*count >= 50) {
        printf("Danh sach da day, khong the them moi.\n");
        return;
    }
    printf("Nhap thong tin sinh vien moi:\n");

    students[*count].id = *count + 1;

    printf("Ten: ");
    fgets(students[*count].name, sizeof(students[*count].name), stdin);

    printf("Tuoi: ");
    scanf("%d", &students[*count].age);
    getchar();

    printf("So dien thoai: ");
    fgets(students[*count].phoneNumber, sizeof(students[*count].phoneNumber), stdin);

    (*count)++;
    printf("Da them sinh vien thanh cong.\n");
}

void suaSinhVien(struct Student students[], int count) {
    int id;
    printf("Nhap ID sinh vien can sua: ");
    scanf("%d", &id);
    getchar();

    for (int i = 0; i < count; i++) {
        if (students[i].id == id) {
            printf("Nhap ten moi: ");
            fgets(students[i].name, sizeof(students[i].name), stdin);
            printf("Nhap tuoi moi: ");
            scanf("%d", &students[i].age);
            getchar();
            printf("Da sua sinh vien thanh cong.\n");
            return;
        }
    }
    printf("Khong tim thay sinh vien co ID %d.\n", id);
}

void xoaSinhVien(struct Student students[], int *count) {
    char name[50];
    printf("Nhap ten sinh vien can xoa: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    for (int i = 0; i < *count; i++) {
        if (strncmp(students[i].name, name, strlen(name)) == 0) {
            for (int j = i; j < *count - 1; j++) {
                students[j] = students[j + 1];
            }
            (*count)--;
            printf("Da xoa sinh vien thanh cong.\n");
            return;
        }
    }
    printf("Khong tim thay sinh vien co ten \"%s\".\n", name);
}

void timKiemSinhVien(struct Student students[], int count) {
    char name[50];
    printf("Nhap ten sinh vien can tim: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    int found = 0;
    for (int i = 0; i < count; i++) {
        if (strstr(students[i].name, name)) {
            printf("ID: %d\n", students[i].id);
            printf("Ten: %s", students[i].name);
            printf("Tuoi: %d\n", students[i].age);
            printf("So dien thoai: %s\n", students[i].phoneNumber);
            printf("\n");
            found = 1;
        }
    }
    if (!found) {
        printf("Khong tim thay sinh vien.\n");
    }
}

void sapXepSinhVien(struct Student students[], int count) {
    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            if (strcmp(students[i].name, students[j].name) > 0) {
                struct Student temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
    printf("Da sap xep sinh vien theo ten.\n");
}

int main() {
    struct Student students[50] = {
        {1, "Nguyen Van A\n", 18, "0123456789\n"},
        {2, "Tran Thi B\n", 19, "0987654321\n"},
        {3, "Le Van C\n", 20, "0111222333\n"},
        {4, "Pham Thi D\n", 21, "0999888777\n"},
        {5, "Hoang Van E\n", 22, "0909090909\n"}
    };

    int count = 5;
    int choice;

    do {
        printf("\n===== MENU =====\n");
        printf("1. Hien thi danh sach sinh vien\n");
        printf("2. Them sinh vien\n");
        printf("3. Sua thong tin sinh vien\n");
        printf("4. Xoa sinh vien\n");
        printf("5. Tim kiem sinh vien\n");
        printf("6. Sap xep danh sach sinh vien\n");
        printf("0. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1:
                hienThiDanhSach(students, count);
                break;
            case 2:
                themSinhVien(students, &count);
                break;
            case 3:
                suaSinhVien(students, count);
                break;
            case 4:
                xoaSinhVien(students, &count);
                break;
            case 5:
                timKiemSinhVien(students, count);
                break;
            case 6:
                sapXepSinhVien(students, count);
                break;
            case 0:
                printf("Tam biet!\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long nhap lai.\n");
        }
    } while (choice != 0);

    return 0;
}

