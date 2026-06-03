/*
Create a program that calculates grades based on marks.

A -> above 90%
B -> above 75%
C -> above 60%
D -> above 30%
F -> below 30%
*/


#include <stdio.h>
int main() {
    /*
     * Logic:
     * - Goal: Create a program that calculates grades based on marks. A -> above 90% B -> above 75% C -> above 60% D -> above 30% F -> below 30%
     * - Prompts the user for required inputs.
     * - Executes standard control flow, conditions, or loops to compute the result.
     * - Prints the formatted output to the console.
     */


    float marks;

    printf("Enter your marks: ");
    scanf("%f", &marks);

    if (marks >= 90) {

        printf("Grade A\n");

    } else if (marks >= 75) {

        printf("Grade B\n");

    } else if (marks >= 60) {

        printf("Grade C\n");

    } else if (marks >= 30) {

        printf("Grade D\n");

    } else {

        printf("You got FAIL!!\n");
    }

    return 0;
}