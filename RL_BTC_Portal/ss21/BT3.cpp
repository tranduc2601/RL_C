#include <stdio.h>

int main() {
    FILE *f;
    char text[1000];

    f = fopen("bt01.txt", "a");

    if (f == NULL) {
        printf("Mo file that bai!\n");
        return 1;
    }

    printf("Nhap chuoi de ghi them vao file: ");
    fgets(text, sizeof(text), stdin);

    fprintf(f, "%s", text);

    fclose(f);

    printf("Da ghi them vao file bt01.txt!\n");

    return 0;
}

