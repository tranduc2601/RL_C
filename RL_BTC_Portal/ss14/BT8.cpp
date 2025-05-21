#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[] = "hello world";
    
    if (chuoi[0] >= 'a' && chuoi[0] <= 'z') {
        chuoi[0] = chuoi[0] - 32;
    }

    for (int i = 1; i < strlen(chuoi); i++) {
        if (chuoi[i - 1] == ' ' && chuoi[i] >= 'a' && chuoi[i] <= 'z') {
            chuoi[i] = chuoi[i] - 32; 
        }
    }

    printf("Chuoi sau khi viet hoa: %s\n", chuoi);
    return 0;
}

