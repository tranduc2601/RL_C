#include <stdio.h>

int main() {
    int firstNum, secondNum;
    int isSmallerNum;
    printf("Nhap vao so thu nhat: ");
    scanf("%d", &firstNum);
    printf("Nhap vao so thu hai: ");
    scanf("%d", &secondNum);
    if (firstNum < secondNum) {
        isSmallerNum = firstNum;
    } else {
        isSmallerNum = secondNum;
    }
    printf("So nho hon trong hai so %d va %d la: %d\n", firstNum, secondNum, isSmallerNum);
    return 0;
}
