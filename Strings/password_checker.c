/*
Create a program using do-while to find
password checker until a valid password is entered.
*/

#include <stdio.h>
#include <string.h>

int main() {
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