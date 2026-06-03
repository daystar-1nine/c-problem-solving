/*
Create a program that categorize a person into different age groups.

Child -> below 13
Teen -> below 20
Adult -> below 60
Senior -> above 60
*/
#include <stdio.h>

int main() {
    /*
     * Logic:
     * - Goal: Create a program that categorize a person into different age groups. Child -> below 13 Teen -> below 20 Adult -> below 60 Senior -> above 60
     * - Prompts the user for required inputs.
     * - Executes standard control flow, conditions, or loops to compute the result.
     * - Prints the formatted output to the console.
     */


    int age;

    printf("Enter age: ");
    scanf("%d", &age);

    if (age <= 13) {

        printf("Child\n");

    } else if (age <= 20) {

        printf("Teenager\n");

    } else if (age <= 60) {

        printf("Adult\n");

    } else {

        printf("Senior Citizen\n");
    }

    return 0;
}