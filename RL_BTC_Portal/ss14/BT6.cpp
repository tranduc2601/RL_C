#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[] = "Rikkei Academy!";
    int dem = 0;

    for (int i = 0; i < strlen(chuoi); i++) {
        if ((chuoi[i] >= 'A' && chuoi[i] <= 'Z') || (chuoi[i] >= 'a' && chuoi[i] <= 'z')) {
            dem++;
        }
    }

    printf("So ky tu la chu cai trong chuoi: %d\n", dem);

    return 0;
}

