/*
Use printf with format specifiers to format
and print a date string (day, month, year).
*/

#include <stdio.h>

int main() {
    int day = 1;
    int month = 6;
    int year = 2026;

    printf("Formatted Date: %02d/%02d/%d\n",
           day, month, year);

    return 0;
}