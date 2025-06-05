#include <stdio.h>

int main() {
    FILE *f;
    char ch;

    f = fopen("bt01.txt", "r");

    if (f == NULL) {
        printf("Mo file that bai!\n");
        return 1;
    }

    ch = fgetc(f);

    printf("Ky tu dau tien trong file la: %c\n", ch);

    fclose(f);

    return 0;
}

