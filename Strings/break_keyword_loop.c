/*
Create a program using break to read inputs
from the user in a loop and break the loop
if a specific keyword (like "exit") is entered.
*/

#include <stdio.h>
#include <string.h>

int main() {
    /*
     * Logic:
     * 1. Uses an infinite while(1) loop to continuously request text input from the user.
     * 2. Uses %99s inside scanf to safely read input without exceeding the 100-character buffer capacity.
     * 3. Uses strcmp() to compare the user input with the keyword "exit".
     * 4. If the input is "exit", executes a break statement to exit the loop immediately.
     * 5. Otherwise, prints the user input and continues to the next loop iteration.
     */
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