/*
Create a program to find the sum of two diagonal elements.
*/

#include <stdio.h>

int main() {
    int arr[3][3];
    int i, j;
    int primarySum = 0;
    int secondarySum = 0;

    printf("Enter 3x3 matrix elements:\n");

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Primary diagonal sum
    for(i = 0; i < 3; i++) {
        primarySum = primarySum + arr[i][i];
    }

    // Secondary diagonal sum
    for(i = 0; i < 3; i++) {
        secondarySum = secondarySum + arr[i][2 - i];
    }

    printf("Primary Diagonal Sum = %d\n", primarySum);
    printf("Secondary Diagonal Sum = %d\n", secondarySum);

    return 0;
}