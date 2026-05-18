//Create a program to find the minimum of two numbers using ternary operator.

#include<stdio.h>
int main(){

    int num1 , num2;

    printf("Enter 1st number: ");
    scanf("%d",&num1);
    printf("Enter 2nd number: ");
    scanf("%d",&num2); 
    
    (num1 < num2)?printf("1st is Minimum"):printf("2nd is Minimum");


    return 0;
}