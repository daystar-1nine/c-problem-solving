//Create a program to define a constant for the mathematical value pi (3.14159) and use it to calculate and print the circumference of a circle with a radius input from user.

#include<stdio.h>
int main(){
    /*
     * Logic:
     * - Goal: Create a program to define a constant for the mathematical value pi (3.14159) and use it to calculate and print the circumference of a circle with a radius input from user.
     * - Prompts the user for required inputs.
     * - Executes standard control flow, conditions, or loops to compute the result.
     * - Prints the formatted output to the console.
     */


    int radius;
    const float pi = 3.14159;
    printf("Calculate Circumference of circle!!!\n");
    printf("Enter radius of circle: ");
    scanf("%d", &radius);

    float circumference = 2 * pi * radius;

    printf("Circumference of circle is %.2f\n",circumference);

    return 0;
}