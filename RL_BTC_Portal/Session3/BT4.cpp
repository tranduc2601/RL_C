#include <stdio.h>

int main() {
    // khai bao cac bien diem
    float toan, van, anh;
    float tong, trungBinh;

    // nhap diem tu nguoi dung
    printf("nhap diem toan: ");
    scanf("%f", &toan);

    printf("nhap diem van: ");
    scanf("%f", &van);

    printf("nhap diem anh: ");
    scanf("%f", &anh);

    // tinh tong diem va diem trung binh
    tong = toan + van + anh;
    trungBinh = tong / 3;

    // hien thi ket qua voi 2 so thap phan
    printf("tong diem: %.2f\n", tong);
    printf("diem trung binh: %.2f\n", trungBinh);

    return 0;
}
 
