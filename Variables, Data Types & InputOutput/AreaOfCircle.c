//Create a program to print the area of a circle by inputting its radius.

#include<stdio.h>
int main(){

    int radius;
    const float pi = 3.14159;
    printf("Calculate Area of circle!!!\n");
    printf("Enter radius of circle: ");
    scanf("%d", &radius);

    float area =  pi * radius * radius;

    printf("Area of circle is %.2f\n",area);

    return 0;
}