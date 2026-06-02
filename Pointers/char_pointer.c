/*
Declare a pointer to a char and use it to read
and print a character entered by the user.
*/

#include <stdio.h>

int main() {
    char ch;

    // Character pointer
    char *ptr = &ch;

    printf("Enter a character: ");
    scanf("%c", ptr);

    printf("Character entered = %c\n", *ptr);

    return 0;
}