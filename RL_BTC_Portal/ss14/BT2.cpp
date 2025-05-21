#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[] = "Hello";

    for (int i = 0; i < strlen(chuoi); i++) {
        printf("%c ", chuoi[i]);
    }

    return 0;
}

