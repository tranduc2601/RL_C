#include <stdio.h>

int main() {
    int correctNum = 26;
    int inputNum;

    // lap cho den khi nguoi dung nhap dung so
    do {
        printf("nhap mot so nguyen(doan 1 so): ");
        scanf("%d", &inputNum);

        if (inputNum != correctNum) {
            printf("sai, hay nhap lai.\n");
        }
    } while (inputNum != correctNum);

    printf("chinh xac! ket thuc chuong trinh.\n");

    return 0;
}

