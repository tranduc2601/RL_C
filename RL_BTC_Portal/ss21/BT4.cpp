#include <stdio.h>

int main() {
    FILE *f;
    char line[1000];

    f = fopen("bt01.txt", "r");

    if (f == NULL) {
        printf("Mo file that bai!\n");
        return 1;
    }

    fgets(line, sizeof(line), f);

    printf("Dong dau tien trong file la: %s", line);

    fclose(f);

    return 0;
}

