/*
Read a line of text from the user using fgets
and then print it using puts.
*/

#include <stdio.h>

int main() {
    char text[100];

    printf("Enter a line of text:\n");

    fgets(text, sizeof(text), stdin);

    printf("\nYou entered:\n");

    puts(text);

    return 0;
}