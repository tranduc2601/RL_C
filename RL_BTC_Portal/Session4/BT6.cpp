#include <stdio.h>

int main() {
    // khai bao bien chi so cu, chi so moi va so dien tieu thu
    int chiSoCu, chiSoMoi, soDien;
    long tienDien;

    // nhap chi so cu va chi so moi
    printf("nhap chi so cu: ");
    scanf("%d", &chiSoCu);

    printf("nhap chi so moi: ");
    scanf("%d", &chiSoMoi);

    // tinh so dien tieu thu
    soDien = chiSoMoi - chiSoCu;

    // kiem tra va tinh tien dien theo tung muc
    if (soDien < 0) {
        printf("chi so moi phai lon hon hoac bang chi so cu\n");
        return 1;
    }

    if (soDien < 50) {
        tienDien = soDien * 10000;
    } else if (soDien < 100) {
        tienDien = soDien * 15000;
    } else if (soDien < 150) {
        tienDien = soDien * 20000;
    } else if (soDien < 200) {
        tienDien = soDien * 25000;
    } else {
        tienDien = soDien * 30000;
    }

    // hien thi ket qua
    printf("so dien da dung: %d kWh\n", soDien);
    printf("tien dien phai tra: %ld VND\n", tienDien);

    return 0;
}

