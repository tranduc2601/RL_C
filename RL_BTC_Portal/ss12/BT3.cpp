#include <stdio.h>

long long tinhGiaiThua(int n) {
    long long ketQua = 1;
    for (int i = 1; i <= n; i++) {
        ketQua *= i;
    }
    return ketQua;
}

int main() {
    int so;
    printf("Nhap so nguyen: ");
    scanf("%d", &so);

    if (so < 0) {
        printf("Khong tinh duoc giai thua cua so am.\n");
    } else {
        long long gt = tinhGiaiThua(so);
        printf("Giai thua cua %d la %lld\n", so, gt);
    }

    return 0;
}

