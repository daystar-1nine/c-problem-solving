//Create a program to find the minimum of two numbers using ternary operator.

#include<stdio.h>
int main(){
    /*
     * Logic:
     * - Goal: Create a program to find the minimum of two numbers using ternary operator.
     * - Prompts the user for required inputs.
     * - Executes standard control flow, conditions, or loops to compute the result.
     * - Prints the formatted output to the console.
     */


    int num1 , num2;

    printf("Enter 1st number: ");
    scanf("%d",&num1);
    printf("Enter 2nd number: ");
    scanf("%d",&num2); 
    
    (num1 < num2)?printf("1st is Minimum"):printf("2nd is Minimum");


    return 0;
}