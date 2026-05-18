//Create a program to convert Fahrenheit to Celsius.
//°C = (°F - 32) × 5 / 9

#include <stdio.h>

int main() {

    printf("Convert Fahrenheit to Celsius\n\n");

    int fah;
    float cel;

    printf("Enter Fahrenheit value: ");
    scanf("%d", &fah);

    cel = (fah - 32) * 5.0 / 9.0;

    printf("Converted value is %.2f Celsius\n", cel);

    return 0;
}