//Write a function that calculates the factorial of a given number.

#include<stdio.h>
int main(){
    /*
     * Logic:
     * - Goal: Write a function that calculates the factorial of a given number.
     * - Prompts the user for required inputs.
     * - Executes standard control flow, conditions, or loops to compute the result.
     * - Prints the formatted output to the console.
     */


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