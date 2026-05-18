//Create a program that computes the sum of the digits of an integer.

#include <stdio.h>

int main() {

    printf("Sum of Digits!!!\n\n");

    int num, digit, sum = 0;

    printf("Enter number: ");
    scanf("%d", &num);

    while (num != 0) {

        digit = num % 10;

        sum += digit;

        num = num / 10;
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}   