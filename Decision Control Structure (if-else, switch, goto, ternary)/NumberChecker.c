//Create a program that determines if a number is positive, negative, or zero.

#include<stdio.h>
int main(){
    /*
     * Logic:
     * - Goal: Create a program that determines if a number is positive, negative, or zero.
     * - Prompts the user for required inputs.
     * - Executes standard control flow, conditions, or loops to compute the result.
     * - Prints the formatted output to the console.
     */


    int num;

    printf("\nEnter Number: ");
    scanf("%d",&num);

    if(num == 0){
        printf("\nNumber entered by you is Zero");
    }else if(num < 0){
        printf("\nNumber entered by you is Negative");
    }else{
        printf("\nNumber entered by you is Positive");
    }


    return 0;
}