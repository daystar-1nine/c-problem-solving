/*
Create a simple text-based user login system
that compares a stored password string using strcmp.
*/

#include <stdio.h>
#include <string.h>

int main() {
    /*
     * Logic:
     * 1. Allocates a buffer of 100 bytes for the user password input.
     * 2. Reads input securely using a limit of 99 characters (%99s) to prevent buffer overflows.
     * 3. Uses strcmp() to check if the user input matches the stored password.
     * 4. If strcmp returns 0 (exact match), displays success; otherwise displays incorrect password.
     */
    char storedPassword[] = "admin123";
    char userPassword[100];

    printf("Enter password: ");
    scanf("%99s", userPassword);

    if(strcmp(storedPassword, userPassword) == 0) {
        printf("Login Successful!\n");
    } else {
        printf("Incorrect Password!\n");
    }

    return 0;
}