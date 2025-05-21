#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[] = "hello world";
    int dem = 0;

    for (int i = 0; i < strlen(chuoi); i++) {
        if (chuoi[i] == ' ') {
            dem++;
        }
    }

 
    if (strlen(chuoi) > 0) {
        dem = dem + 1;
    }

    printf("So tu trong chuoi: %d\n", dem);

    return 0;
}

