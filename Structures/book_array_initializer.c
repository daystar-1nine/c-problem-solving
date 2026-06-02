/*
Initialize an array of Book structures with
different data for each book using designated initializers.
*/

#include <stdio.h>

// Structure Definition
struct Book {
    char title[50];
    char author[50];
    float price;
};

int main() {

    struct Book books[3] = {
        {.title = "C Programming", .author = "Dennis Ritchie", .price = 499.99},
        {.title = "Python Basics", .author = "Guido van Rossum", .price = 599.50},
        {.title = "Data Structures", .author = "Mark Allen", .price = 450.75}
    };

    int i;

    printf("Book Details:\n\n");

    for(i = 0; i < 3; i++) {

        printf("Book %d\n", i + 1);
        printf("Title : %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Price : %.2f\n\n", books[i].price);
    }

    return 0;
}