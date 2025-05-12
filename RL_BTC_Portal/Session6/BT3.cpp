#include <stdio.h>
#include <string.h>

int main() {
    char correctPassword[] = "abc123";
    char userPassword[50];

    printf("Nhap mat khau: ");
    scanf("%s", userPassword);

    if (strcmp(userPassword, correctPassword) == 0) {
        printf("Mat khau dung.\n");
    } else {
        printf("Mat khau sai.\n");
    }

    return 0;
}

