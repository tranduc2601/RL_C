#include <stdio.h>

void taoMaTran(int hang, int cot, int a[100][100]) {
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            printf("Nhap a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}

void inMaTran(int hang, int cot, int a[100][100]) {
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int hang, cot;
    int a[100][100];

    printf("Nhap so hang: ");
    scanf("%d", &hang);
    printf("Nhap so cot: ");
    scanf("%d", &cot);

    taoMaTran(hang, cot, a);

    printf("Ma tran vua nhap:\n");
    inMaTran(hang, cot, a);

    return 0;
}

