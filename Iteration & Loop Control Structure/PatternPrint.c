#include<stdio.h>

int main() {

    int rows, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    // Right Half Pyramid
    printf("\nRight Half Pyramid:\n");

    for(i = 1; i <= rows; i++) {
        for(j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    // Reverse Right Half Pyramid
    printf("\nReverse Right Half Pyramid:\n");

    for(i = rows; i >= 1; i--) {
        for(j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    
    // Left Half Pyramid
    printf("\nLeft Half Pyramid:\n");

    for(i = 1; i <= rows; i++) {
        for(j = 1; j <= rows - i; j++) {
            printf("  ");
        }
        for(j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}