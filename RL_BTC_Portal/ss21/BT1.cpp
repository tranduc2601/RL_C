#include <stdio.h>

int main() {
    FILE *f;
    char text[1000];

    f = fopen("bt01.txt", "w");

    if (f == NULL) {
        printf("Mo file that bai!\n");
        return 1;
    }

    printf("Nhap mot chuoi bat ky: ");
    fgets(text, sizeof(text), stdin);

    fprintf(f, "%s", text);

    fclose(f);

    printf("Da ghi vao file bt01.txt!\n");

    return 0;
}

