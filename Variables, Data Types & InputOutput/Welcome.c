//Create a program to input name of the person and respond with "Welcome NAME to C World"

#include<stdio.h>
int main(){

    char name[20];
    printf("Enter your name: ");
    scanf("%19s" ,name);

    printf("Welcome!! %s to C world",name);


    return 0;
}