#include <stdio.h>

struct Student {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    struct Student students[50];
    int i;

    for (i = 0; i < 5; i++) {
        students[i].id = i + 1;

        printf("Nhap thong tin sinh vien thu %d:\n", i + 1);

        printf("Ten: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);

        printf("Tuoi: ");
        scanf("%d", &students[i].age);
        getchar();

        printf("So dien thoai: ");
        fgets(students[i].phoneNumber, sizeof(students[i].phoneNumber), stdin);

        printf("\n");
    }

    printf("Danh sach sinh vien:\n");
    for (i = 0; i < 5; i++) {
        printf("Sinh vien %d:\n", i + 1);
        printf("ID: %d\n", students[i].id);
        printf("Ten: %s", students[i].name);
        printf("Tuoi: %d\n", students[i].age);
        printf("So dien thoai: %s", students[i].phoneNumber);
        printf("\n");
    }

    return 0;
}

