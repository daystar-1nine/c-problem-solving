//Create a program to sum all odd numbers from 1 to a specified number N.

#include <stdio.h>

int main() {

    int sum = 0;
    int num;

    printf("Enter value of N: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        if (i % 2 != 0) {
            sum += i;
        }
    }
    printf("Sum of odd numbers = %d\n", sum);

    return 0;
}