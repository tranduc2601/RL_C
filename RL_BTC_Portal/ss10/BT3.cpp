#include <stdio.h>

int main() {
    int arr[] = {10, 3, 5, 2, 8, 1, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key, j;

    for (int i = 1; i < size; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }

    printf("Mang sau khi sap xep tang dan:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}

