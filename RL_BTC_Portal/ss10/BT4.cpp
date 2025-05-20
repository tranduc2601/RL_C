#include <stdio.h>

int main() {
    int arr[] = {12, 5, 7, 3, 20, 15, 8};
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

    int target;
    printf("Nhap so can tim: ");
    scanf("%d", &target);

    int left = 0, right = size - 1, mid, found = 0;

    while (left <= right) {
        mid = (left + right) / 2;
        if (arr[mid] == target) {
            printf("Tim thay %d tai vi tri %d\n", target, mid);
            found = 1;
            break;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    if (!found) {
        printf("Khong tim thay %d trong mang.\n", target);
    }

    return 0;
}

