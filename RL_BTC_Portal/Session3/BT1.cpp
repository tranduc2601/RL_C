#include <stdio.h>

int main() {
    // khai bao bien ten de luu ten nguoi dung
    char ten[50];

    // yeu cau nguoi dung nhap ten
    printf("nhap ten cua ban: ");
    fgets(ten, sizeof(ten), stdin);  // doc chuoi co dau cach

    // in ra cau chao
    printf("xin chao %s", ten);

    return 0;
}

