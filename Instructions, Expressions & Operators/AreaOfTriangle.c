//Create a program to calculate the Area of a Triangle.
//Area of triangle = ½ * B * H


#include<stdio.h>
int main(){

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