/*
Create a simple text-based user login system
that compares a stored password string using strcmp.
*/

#include <stdio.h>
#include <string.h>

int main() {
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