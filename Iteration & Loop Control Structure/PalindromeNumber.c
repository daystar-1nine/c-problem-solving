//Program to check if a number is palindrome

#include<stdio.h>
int main() {

    int num, originalNum, reverse = 0, rem;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    while(num != 0) {
        rem = num % 10;
        reverse = reverse * 10 + rem;
        num = num / 10;
    }

    if(originalNum == reverse)
        printf("%d is a Palindrome Number", originalNum);
    else
        printf("%d is not a Palindrome Number", originalNum);

    return 0;
}