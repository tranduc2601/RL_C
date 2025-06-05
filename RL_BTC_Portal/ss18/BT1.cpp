#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    struct Student student1;

    strcpy(student1.name, "Tran Minh DUc");
    student1.age = 19;
    strcpy(student1.phoneNumber, "0123456789");

    printf("Thong tin sinh vien:\n");
    printf("Ten: %s\n", student1.name);
    printf("Tuoi: %d\n", student1.age);
    printf("So dien thoai: %s\n", student1.phoneNumber);

    return 0;
}

