// 1. Program using continue to sum all positive numbers
// Skip negative numbers

#include<stdio.h>

int main() {

    int num, sum = 0;

    printf("Enter 5 numbers:\n");

    for(int i = 1; i <= 5; i++) {

        scanf("%d", &num);

        if(num < 0) {
            continue;
        }

        sum = sum + num;
    }

    printf("Sum of positive numbers = %d", sum);

    return 0;
}