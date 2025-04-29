#include <stdio.h>
#include <stdbool.h>

// ham kiem tra nam nhuan
bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main() {
    // khai bao bien ngay thang nam
    int day, month, year;

    // nhap du lieu tu ban phim
    printf("nhap ngay: ");
    scanf("%d", &day);
    printf("nhap thang: ");
    scanf("%d", &month);
    printf("nhap nam: ");
    scanf("%d", &year);

    // khai bao bien kiem tra tinh hop le
    bool valid = true;

    // kiem tra thang hop le
    if (month < 1 || month > 12) {
        valid = false;
    } else {
        // xac dinh so ngay toi da cua thang
        int maxDay;
        switch (month) {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                maxDay = 31;
                break;
            case 4: case 6: case 9: case 11:
                maxDay = 30;
                break;
            case 2:
                maxDay = isLeapYear(year) ? 29 : 28;
                break;
        }

        // kiem tra ngay hop le
        if (day < 1 || day > maxDay) {
            valid = false;
        }
    }

    // in ket qua
    if (valid) {
        printf("ngay thang nam hop le\n");
    } else {
        printf("ngay thang nam khong hop le\n");
    }

    return 0;
}

