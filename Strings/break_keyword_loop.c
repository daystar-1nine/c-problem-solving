/*
Create a program using break to read inputs
from the user in a loop and break the loop
if a specific keyword (like "exit") is entered.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char text[100];

    while(1) {

        printf("Enter text (type 'exit' to quit): ");
        scanf("%99s", text);

        // Check exit condition
        if(strcmp(text, "exit") == 0) {
            break;
        }

        printf("You entered: %s\n", text);
    }

    printf("Program Ended.\n");

    return 0;
}