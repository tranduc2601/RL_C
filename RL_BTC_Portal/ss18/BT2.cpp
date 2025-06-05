#include <stdio.h>

struct Student {
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    struct Student student1;

    printf("Nhap ten: ");
    fgets(student1.name, sizeof(student1.name), stdin);

    printf("Nhap tuoi: ");
    scanf("%d", &student1.age);
    getchar(); 

    printf("Nhap so dien thoai: ");
    fgets(student1.phoneNumber, sizeof(student1.phoneNumber), stdin);

    printf("\nThong tin sinh vien:\n");
    printf("Ten: %s", student1.name);
    printf("Tuoi: %d\n", student1.age);
    printf("So dien thoai: %s", student1.phoneNumber);

    return 0;
}

