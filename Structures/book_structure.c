/*
Create a program where you need to store and process
data for a Book with attributes like title, author,
and price, demonstrating why a structure is more
suitable than separate variables.
*/

#include <stdio.h>

// Structure Definition
struct Book {
    char title[100];
    char author[100];
    float price;
};

int main() {
    /*
     * Logic:
     * - Goal: Create a program where you need to store and process data for a Book with attributes like title, author, and price, demonstrating why a structure is more suitable than separate variables.
     * - Prompts the user for required inputs.
     * - Executes standard control flow, conditions, or loops to compute the result.
     * - Prints the formatted output to the console.
     */


    struct Book book1;

    printf("Enter book title: ");
    fgets(book1.title, sizeof(book1.title), stdin);

    printf("Enter author name: ");
    fgets(book1.author, sizeof(book1.author), stdin);

    printf("Enter book price: ");
    scanf("%f", &book1.price);

    printf("\nBook Details:\n");
    printf("Title: %s", book1.title);
    printf("Author: %s", book1.author);
    printf("Price: %.2f\n", book1.price);

    return 0;
}