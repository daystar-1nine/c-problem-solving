//Create a program that determines the greatest of the three numbers.

#include<stdio.h>
int main(){

    int num1,num2,num3;

    printf("Enter 1st number: ");
    scanf("%d",&num1);
    printf("Enter 2nd number: ");
    scanf("%d",&num2);
    printf("Enter 3rd number: ");
    scanf("%d",&num3);

    if(num1 >= num2 && num1 >= num3){
        printf("1st number is greatest!!!");
    }else if(num2 >= num1 && num2 >= num3){
        printf("2nd number is greatest!!!");
    }else{
        printf("3rd number is greatest!!!");
    }

    return 0;
}