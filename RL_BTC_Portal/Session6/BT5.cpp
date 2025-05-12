#include <stdio.h>

int main() {
    int year, month, daysInMonth;

    printf("Nhap nam: ");
    scanf("%d", &year);

    printf("Nhap thang (1-12): ");
    scanf("%d", &month);

    if (month < 1 || month > 12) {
        printf("Thang khong hop le.\n");
        return 1;
    }

    // Xac dinh so ngay trong thang
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            daysInMonth = 31;
            break;
        case 4: case 6: case 9: case 11:
            daysInMonth = 30;
            break;
        case 2:
            // Kiem tra nam nhuan
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                daysInMonth = 29;
            } else {
                daysInMonth = 28;
            }
            break;
    }

    printf("Thang %d nam %d co %d ngay.\n", month, year, daysInMonth);

    return 0;
}

