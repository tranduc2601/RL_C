#include <stdio.h>

int main() {
    int n;
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);

    int arr[n][n];

    printf("Nhap cac phan tu cho mang %dx%d:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Ma tran vuong %dx%d:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

