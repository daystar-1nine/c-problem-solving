//Create a program to calculate Perimeter of a rectangle.
//Perimeter of rectangle ABCD = A + B + C + D

#include<stdio.h>
int main(){

    printf("Perimeter of rectangle!!!!\n\n");

    int len;
    int bre;

    printf("Enter length of rectangle: ");
    scanf("%d",&len);
    printf("Enter breath of rectangle: ");
    scanf("%d",&bre);

    int peri = 2 * (len + bre);
    
    printf("Perimeter of rectangle: %d",peri);




    return 0;
}