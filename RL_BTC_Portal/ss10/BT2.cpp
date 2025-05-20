#include <stdio.h>

int main() {
    int arr[] = {23, 5, 12, 7, 1, 9, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int temp;

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Mang sau khi sap xep tang dan:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}

