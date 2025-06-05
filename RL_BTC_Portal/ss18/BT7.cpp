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
    char nameToDelete[50];
    int found = 0;

    printf("Nhap ten sinh vien can xoa: ");
    fgets(nameToDelete, sizeof(nameToDelete), stdin);

    nameToDelete[strcspn(nameToDelete, "\n")] = '\0';

    for (int i = 0; i < currentCount; i++) {
        
        if (strcmp(students[i].name, nameToDelete) == 0 || 
            strncmp(students[i].name, nameToDelete, strlen(nameToDelete)) == 0) {
            
            found = 1;

            for (int j = i; j < currentCount - 1; j++) {
                students[j] = students[j + 1];
            }

            currentCount--;
            break;
        }
    }

    if (!found) {
        printf("Khong tim thay sinh vien co ten \"%s\"\n", nameToDelete);
    }

    printf("\nDanh sach sinh vien sau khi xoa:\n");
    for (int i = 0; i < currentCount; i++) {
        printf("ID: %d\n", students[i].id);
        printf("Ten: %s", students[i].name);
        printf("Tuoi: %d\n", students[i].age);
        printf("So dien thoai: %s", students[i].phoneNumber);
        printf("\n");
    }

    return 0;
}

