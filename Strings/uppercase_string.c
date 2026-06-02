/*
Write a program to convert an input string
to uppercase.
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0') {

        str[i] = toupper(str[i]);
        i++;
    }

    printf("Uppercase String:\n%s", str);

    return 0;
}