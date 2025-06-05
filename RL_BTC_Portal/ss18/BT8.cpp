#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};

void inDanhSach(struct Student students[], int count) {
    for (int i = 0; i < count; i++) {
        printf("ID: %d\n", students[i].id);
        printf("Ten: %s", students[i].name);
        printf("Tuoi: %d\n", students[i].age);
        printf("So dien thoai: %s", students[i].phoneNumber);
        printf("\n");
    }
}


void sapXepTheoTen(struct Student students[], int count) {
    struct Student temp;
    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            if (strcmp(students[i].name, students[j].name) > 0) {
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
}

int main() {
    struct Student students[5] = {
        {1, "Tran Van B\n", 20, "0987654321\n"},
        {2, "Nguyen Van A\n", 19, "0123456789\n"},
        {3, "Le Thi C\n", 21, "0909090909\n"},
        {4, "Pham Van D\n", 22, "0939393939\n"},
        {5, "Hoang Thi E\n", 20, "0999888777\n"}
    };

    printf("Danh sach sinh vien truoc khi sap xep:\n");
    inDanhSach(students, 5);

    sapXepTheoTen(students, 5);

    printf("\nDanh sach sinh vien sau khi sap xep theo ten:\n");
    inDanhSach(students, 5);

    return 0;
}

