#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[] = "lap trinh C rat de (rot)";
    char kyTu;
    int dem = 0;

    printf("Nhap mot ky tu: ");
    scanf(" %c", &kyTu);

    for (int i = 0; i < strlen(chuoi); i++) {
        if (chuoi[i] == kyTu) {
            dem++;
        }
    }

    printf("Ky tu '%c' xuat hien %d lan trong chuoi.\n", kyTu, dem);

    return 0;
}

