//Create a program that determines if a number is odd or even.

#include<stdio.h>
int main(){
    /*
     * Logic:
     * - Goal: Create a program that determines if a number is odd or even.
     * - Prompts the user for required inputs.
     * - Executes standard control flow, conditions, or loops to compute the result.
     * - Prints the formatted output to the console.
     */


    int num;
    printf("Enter number: ");
    scanf("%d",&num);

    if(num == 0){
        printf("\nNumber entered by you is ZERO!!!");
    }else if(num % 2 == 0){
        printf("\nNumber entered by you is EVEN!!!");
    }else{
        printf("\nNumber entered by you is ODD!!!");
    }

    return 0;
}