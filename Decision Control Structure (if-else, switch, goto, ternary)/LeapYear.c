//Create a program that determines if a given year is a leap year (considering conditions like divisible by 4 but not 100, unless also divisible by 400).

#include <stdio.h>

int main() {

    int year;

    printf("Enter year: ");
    scanf("%d", &year);

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {

        printf("%d is a Leap Year\n", year);

    } else {

        printf("%d is NOT a Leap Year\n", year);
    }

    return 0;
}