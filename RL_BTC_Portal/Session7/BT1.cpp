#include <stdio.h>

int main() {
    int numbers[] = {2, 6, 0, 1, 2006};
    int arrayLength = sizeof(numbers) / sizeof(numbers[0]);

    printf("Cac phan tu trong mang:\n");
    for (int i = 0; i < arrayLength; i++) {
        printf("Phan tu thu %d: %d\n", i, numbers[i]);
    }

    printf("Do dai cua mang la: %d\n", arrayLength);

    return 0;
}
 	
