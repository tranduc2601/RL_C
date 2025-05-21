#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[] = "Hello my gmail is abc123@gmail.com";
    int demChu = 0, demSo = 0, demDacBiet = 0;

    for (int i = 0; i < strlen(chuoi); i++) {
        char c = chuoi[i];
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
            demChu++;
        } else if (c >= '0' && c <= '9') {
            demSo++;
        } else if (c != ' ') {
            demDacBiet++;
        }
    }

    printf("So ky tu la chu cai: %d\n", demChu);
    printf("So ky tu la chu so: %d\n", demSo);
    printf("So ky tu dac biet: %d\n", demDacBiet);

    return 0;
}

