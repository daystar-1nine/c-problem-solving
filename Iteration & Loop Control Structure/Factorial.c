//Write a function that calculates the factorial of a given number.

#include<stdio.h>
int main(){

    printf("Factorial\n\n");

    int num;
    printf("Enter number: ");
    scanf("%d",&num);

    int fact = 1;
    for(int i = 1;i <= num;i++){
        fact *= i;
    }
    printf("Factorial is %d",fact);

    return 0;
}