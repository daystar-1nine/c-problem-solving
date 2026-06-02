/*
Create a program to find the sum and average
of all elements in an array.
*/

#include <stdio.h>

int main() {
    int arr[5], i;
    int sum = 0;
    float average;

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    average = sum / 5.0;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}