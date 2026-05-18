//Create a program to calculate product of two floating points numbers.

#include<stdio.h>
int main(){

    float num1;
    float num2;

    printf("Enter number 1: ");
    scanf("%f",&num1);
    printf("Enter number 2: ");
    scanf("%f",&num2);

    float mul = num1 * num2;
    printf("Multiplication of 2 float number is %.2f", mul);

    return 0;
}