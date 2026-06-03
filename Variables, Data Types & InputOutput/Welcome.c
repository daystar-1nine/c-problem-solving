//Create a program to input name of the person and respond with "Welcome NAME to C World"

#include<stdio.h>
int main(){
    /*
     * Logic:
     * - Goal: Create a program to input name of the person and respond with "Welcome NAME to C World"
     * - Prompts the user for required inputs.
     * - Executes standard control flow, conditions, or loops to compute the result.
     * - Prints the formatted output to the console.
     */


    char name[20];
    printf("Enter your name: ");
    scanf("%19s" ,name);

    printf("Welcome!! %s to C world",name);


    return 0;
}