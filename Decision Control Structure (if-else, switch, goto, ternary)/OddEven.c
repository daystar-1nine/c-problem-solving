//Create a program that determines if a number is odd or even.

#include<stdio.h>
int main(){

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