/*
Create a program to do sum and average
of all elements in a 2-array.
*/

#include <stdio.h>

int main() {
    int arr[3][3];
    int i, j, sum = 0;
    float average;

    printf("Enter 3x3 matrix elements:\n");

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);

            sum = sum + arr[i][j];
        }
    }

    average = sum / 9.0;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}