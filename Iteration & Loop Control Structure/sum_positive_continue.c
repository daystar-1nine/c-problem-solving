/*
Create a program using continue to sum all positive numbers
entered by the user; skip any negative numbers.
*/

#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter numbers (0 to stop):\n");

    while(1) {
        scanf("%d", &num);

        // Stop the loop
        if(num == 0) {
            break;
        }

        // Skip negative numbers
        if(num < 0) {
            continue;
        }

        sum = sum + num;
    }

    printf("Sum of positive numbers = %d\n", sum);

    return 0;
}