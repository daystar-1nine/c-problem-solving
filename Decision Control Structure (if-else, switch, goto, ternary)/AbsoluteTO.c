//Create a program to calculate the absolute value of a given integer using ternary operator.

#include <stdio.h>
int main() {

    int num, absolute;

    printf("Enter number: ");
    scanf("%d", &num);

    absolute = (num < 0) ? -num : num;

    printf("Absolute value is %d\n", absolute);

    return 0;
}