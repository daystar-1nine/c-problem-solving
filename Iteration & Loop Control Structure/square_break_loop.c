/*
Write a program that continuously reads integers from
the user and prints their squares.

Use an infinite loop and a break statement to exit
when a special number (e.g., -1) is entered.
*/

#include <stdio.h>

int main() {
    int num;

    while(1) {

        printf("Enter a number (-1 to exit): ");
        scanf("%d", &num);

        // Exit condition
        if(num == -1) {
            break;
        }

        printf("Square = %d\n", num * num);
    }

    printf("Program Ended.\n");

    return 0;
}