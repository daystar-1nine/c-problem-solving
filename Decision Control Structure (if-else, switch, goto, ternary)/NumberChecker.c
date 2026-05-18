//Create a program that determines if a number is positive, negative, or zero.

#include<stdio.h>
int main(){

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