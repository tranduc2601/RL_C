#include <stdio.h>
#include <stdbool.h> // Thu vien ho tro kieu bool
//hoc xong mon fe bay gio quay lai thi em nen d?t ten bien la tieng anh hay tineg Viet thay oi 

int main() {
    // int: kieu so nguyen, luu cac gia tri nhu -10, 0, 100
    int tuoi = 20;

    // float: kieu so thuc, luu cac so co phan thap phan nhu 3.14, -0.01
    float diemTrungBinh = 7.5;

    // double: kieu so thuc chinh xac cao hon float
    double pi = 3.14159265359;

    // char: kieu ky tu, luu mot ky tu don le, dat trong dau nhay don ''
    char kyTu = 'A';

    // bool: kieu logic (true hoac false)
    bool daDangKy = true;

    // unsigned int: so nguyen khong dau, chi luu gia tri >= 0
    unsigned int soLuong = 100;

    // long: kieu so nguyen lon hon int
    long danSo = 98000000;

    // short: kieu so nguyen nho hon int
    short tuoiNguoi = 15;

    // In ra man hinh de kiem tra
    printf("Tuoi: %d\n", tuoi);
    printf("Diem trung binh: %.2f\n", diemTrungBinh);
    printf("Pi: %lf\n", pi);
    printf("Ky tu: %c\n", kyTu);
    printf("Da dang ky: %s\n", daDangKy ? "true" : "false");
    printf("So luong: %u\n", soLuong);
    printf("Dan so: %ld\n", danSo);
    printf("Tuoi nguoi: %d\n", tuoiNguoi);

    return 0;
}

