//Program to check if a number is an Armstrong number

#include<stdio.h>
int main() {

    int num, originalNum, rem, result = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    while(originalNum != 0) {
        rem = originalNum % 10;
        result = result + (rem * rem * rem);
        originalNum = originalNum / 10;
    }

    if(result == num)
        printf("%d is an Armstrong Number", num);
    else
        printf("%d is not an Armstrong Number", num);

    return 0;
}