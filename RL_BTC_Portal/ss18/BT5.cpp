#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    struct Student students[50] = {
        {1, "Nguyen Van A", 18, "0123456789"},
        {2, "Tran Thi B", 19, "0987654321"},
        {3, "Le Van C", 20, "0111222333"},
        {4, "Pham Thi D", 21, "0999888777"},
        {5, "Hoang Van E", 22, "0909090909"}
    };

    int idToEdit;
    int found = 0;

    printf("Nhap ID sinh vien muon sua: ");
    scanf("%d", &idToEdit);
    getchar(); // Xóa k? t? '\n' sau scanf

    for (int i = 0; i < 5; i++) {
        if (students[i].id == idToEdit) {
            found = 1;

            printf("Nhap ten moi: ");
            fgets(students[i].name, sizeof(students[i].name), stdin);

            printf("Nhap tuoi moi: ");
            scanf("%d", &students[i].age);
            getchar(); // Xóa '\n' sau scanf

            break;
        }
    }

    if (!found) {
        printf("Khong tim thay sinh vien co ID = %d\n", idToEdit);
    }

    printf("\nDanh sach sinh vien sau khi chinh sua:\n");
    for (int i = 0; i < 5; i++) {
        printf("ID: %d\n", students[i].id);
        printf("Ten: %s", students[i].name);
        printf("Tuoi: %d\n", students[i].age);
        printf("So dien thoai: %s\n", students[i].phoneNumber);
        printf("\n");
    }

    return 0;
}

