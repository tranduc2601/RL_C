#include <stdio.h>
#include <string.h>

int main() {
    char inputString[100];
    char reverseString[100];

    printf("Nhap chuoi: ");
    fgets(inputString, sizeof(inputString), stdin);
    size_t len = strlen(inputString);
    if (inputString[len - 1] == '\n') {
        inputString[len - 1] = '\0';
        len--;
    }

    char *ptrInput = inputString;
    char *ptrReverse = reverseString;

    for (int i = len - 1; i >= 0; i--) {
        *(ptrReverse++) = *(ptrInput + i);
    }

    *ptrReverse = '\0';

    printf("Chuoi ban dau: %s\n", inputString);
    printf("Chuoi dao nguoc: %s\n", reverseString);

    return 0;
}

