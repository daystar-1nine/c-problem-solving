//Develop a program that prints the multiplication table for a given number.

#include <stdio.h>
int main() {

    printf("Multiplication Table\n\n");

    int num;

    printf("Enter number: ");
    scanf("%d", &num);

    for (int i = 1; i <= 12; i++){

        printf("%d x %d = %d\n", num, i, (num * i));
    }
    return 0;
}