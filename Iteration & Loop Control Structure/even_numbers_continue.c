/*
Create a program using continue to print only even numbers
using continue for odd numbers.
*/

#include <stdio.h>

int main() {
    int i;

    printf("Even numbers from 1 to 20:\n");

    for(i = 1; i <= 20; i++) {

        // Skip odd numbers
        if(i % 2 != 0) {
            continue;
        }

        printf("%d ", i);
    }

    return 0;
}