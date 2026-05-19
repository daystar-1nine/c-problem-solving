//Program to check whether a number is prime using while

#include<stdio.h>

int main() {

    int num, i = 2, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num <= 1) {
        isPrime = 0;
    }

    while(i < num) {
        if(num % i == 0) {
            isPrime = 0;
            break;
        }
        i++;
    }

    if(isPrime)
        printf("%d is a Prime Number", num);
    else
        printf("%d is not a Prime Number", num);

    return 0;
}