#include <stdio.h>
//khong dung switchcase 
int main() {
    int number1, number2, choice;
    float result;

    // nhap 2 so bat ky
    printf("nhap so thu nhat: ");
    scanf("%d", &number1);
    printf("nhap so thu hai: ");
    scanf("%d", &number2);

    do {
        // hien thi menu CALCULATOR
        printf("\n====== CALCULATOR ======\n");
        printf("1. tong 2 so\n");
        printf("2. hieu 2 so\n");
        printf("3. tich 2 so\n");
        printf("4. thuong 2 so\n");
        printf("5. thoat\n");
        printf("lua chon cua ban: ");
        scanf("%d", &choice);

        if (choice == 1) {
            result = number1 + number2;
            printf("tong = %.2f\n", result);
        } else if (choice == 2) {
            result = number1 - number2;
            printf("hieu = %.2f\n", result);
        } else if (choice == 3) {
            result = number1 * number2;
            printf("tich = %.2f\n", result);
        } else if (choice == 4) {
            if (number2 != 0) {
                result = (float)number1 / number2;
                printf("thuong = %.2f\n", result);
            } else {
                printf("khong the chia cho 0\n");
            }
        } else if (choice == 5) {
            printf("ket thuc chuong trinh.\n");
        } else {
            printf("lua chon khong hop le. vui long nhap lai.\n");
        }

    } while (choice != 5);

    return 0;
}

