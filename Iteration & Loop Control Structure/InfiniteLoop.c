// 3. Program using infinite loop and break statement

#include<stdio.h>

int main() {
    /*
     * Logic:
     * - Goal: 3. Program using infinite loop and break statement
     * - Prompts the user for required inputs.
     * - Executes standard control flow, conditions, or loops to compute the result.
     * - Prints the formatted output to the console.
     */


    int num;

    while(1) {

        printf("Enter a number (-1 to exit): ");
        scanf("%d", &num);

        if(num == -1) {
            break;
        }

        printf("Square = %d\n", num * num);
    }

    printf("Program Ended");

    return 0;
}