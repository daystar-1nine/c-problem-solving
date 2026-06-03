//Create a program to calculate the Area of a Triangle.
//Area of triangle = ½ * B * H


#include<stdio.h>
int main(){
    /*
     * Logic:
     * - Goal: Create a program to calculate the Area of a Triangle. Area of triangle = ½ * B * H
     * - Prompts the user for required inputs.
     * - Executes standard control flow, conditions, or loops to compute the result.
     * - Prints the formatted output to the console.
     */


    printf("Calculate Area of Triangle\n\n");

    int bre;
    int hei;

    printf("Enter Breath of triangle: ");
    scanf("%d",&bre);
    printf("Enter height of triangle: ");
    scanf("%d",&hei);

    float area = 0.5 * bre * hei;
    printf("Area of Triangle is %.2f",area);

    return 0;
}