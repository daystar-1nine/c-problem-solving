/*
Create a program using recursion to check
if a number is a palindrome using recursion.
*/

#include <stdio.h>

// Recursive Function
int reverseNumber(int num, int rev) {

    if(num == 0) {
        return rev;
    }

    return reverseNumber(num / 10, rev * 10 + num % 10);
}

int main() {
    int num, reversed;

    printf("Enter a number: ");
    scanf("%d", &num);

    reversed = reverseNumber(num, 0);

    if(num == reversed) {
        printf("%d is a Palindrome Number.\n", num);
    } else {
        printf("%d is NOT a Palindrome Number.\n", num);
    }

    return 0;
}