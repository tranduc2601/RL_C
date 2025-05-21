#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[] = "Hello";
    int doDai = strlen(chuoi);

    printf("Chuoi dao nguoc: ");
    for (int i = doDai - 1; i >= 0; i--) {
        printf("%c", chuoi[i]);
    }

    return 0;
}

