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

    int currentCount = 5;

    printf("Nhap thong tin sinh vien moi:\n");

    students[currentCount].id = currentCount + 1;

    printf("Ten: ");
    fgets(students[currentCount].name, sizeof(students[currentCount].name), stdin);

    printf("Tuoi: ");
    scanf("%d", &students[currentCount].age);
    getchar();

    printf("So dien thoai: ");
    fgets(students[currentCount].phoneNumber, sizeof(students[currentCount].phoneNumber), stdin);

    currentCount++;

    printf("\nDanh sach sinh vien sau khi them:\n");
    for (int i = 0; i < currentCount; i++) {
        printf("ID: %d\n", students[i].id);
        printf("Ten: %s", students[i].name);
        printf("Tuoi: %d\n", students[i].age);
        printf("So dien thoai: %s", students[i].phoneNumber);
        printf("\n");
    }

    return 0;
}

