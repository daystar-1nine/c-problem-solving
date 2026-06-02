/*
Write a program to change the value of an integer
variable using a pointer and the * operator.
*/

#include <stdio.h>

int main() {
    int num = 10;

    // Pointer declaration
    int *ptr = &num;

    printf("Before change = %d\n", num);

    // Change value using pointer
    *ptr = 50;

    printf("After change = %d\n", num);

    return 0;
}