#include <stdio.h>

int main() {

    int num1 = 1;
    int num2 = 2;
    int temp;

    printf("Before Swapping:\n");
    printf("Number 1 is %d\n", num1);
    printf("Number 2 is %d\n", num2);

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("\nAfter Swapping:\n");
    printf("Number 1 is %d\n", num1);
    printf("Number 2 is %d\n", num2);

    return 0;
}