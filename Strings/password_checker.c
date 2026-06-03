/*
Create a program using do-while to find
password checker until a valid password is entered.
*/

#include <stdio.h>
#include <string.h>

int main() {
    /*
     * Logic:
     * 1. Uses a do-while loop to ensure the user is prompted to enter a password at least once.
     * 2. Safely reads string inputs with %99s to protect the 100-character buffer from overflow.
     * 3. Uses strcmp() to compare the entered password with "admin123".
     * 4. If they do not match, displays an error message and continues looping.
     * 5. Terminates the loop and displays a success message once the correct password is provided.
     */
    char password[100];

    do {

        printf("Enter password: ");
        scanf("%99s", password);

        if(strcmp(password, "admin123") != 0) {
            printf("Invalid Password! Try Again.\n");
        }

    } while(strcmp(password, "admin123") != 0);

    printf("Valid Password Entered.\n");

    return 0;
}