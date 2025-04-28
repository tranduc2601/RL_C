#include <stdio.h>

int main() {
    // khai bao cac bien
    int stt[10] = {1,2,3,4,5,6,7,8,9,10};
    char ten[10][20] = {
        "Nguyen Van A", "Nguyen Van B", "Nguyen Van C", "Nguyen Van D", "Nguyen Van E",
        "Nguyen Van F", "Nguyen Van G", "Nguyen Van H", "Nguyen Van I", "Nguyen Van K"
    };
    int tuoi[10] = {20,21,18,19,22,21,23,19,18,21};
    char sdt[10][12] = {
        "0904488481", "0904488482", "0904488483", "0904488484", "0904488485",
        "0904488486", "0904488487", "0904488488", "0904488489", "0904488480"
    };
    char email[10][30] = {
        "anv@rikkeiacademy.com", "bnv@rikkeiacademy.com", "cnv@rikkeiacademy.com",
        "dnv@rikkeiacademy.com", "env@rikkeiacademy.com", "fnv@rikkeiacademy.com",
        "gnv@rikkeiacademy.com", "hnv@rikkeiacademy.com", "inv@rikkeiacademy.com",
        "knv@rikkeiacademy.com"
    };

    // in tieu de bang
    printf("+----+----------------+-----+------------+----------------------+\n");
    printf("| stt| ho va ten       | tuoi| so dien thoai| email                |\n");
    printf("+----+----------------+-----+------------+----------------------+\n");

    // in danh sach sinh vien
    for (int i = 0; i < 10; i++) {
        printf("| %-2d | %-14s | %-3d | %-10s | %-20s |\n",
               stt[i], ten[i], tuoi[i], sdt[i], email[i]);
        printf("+----+----------------+-----+------------+----------------------+\n");
    }

    return 0;
}

