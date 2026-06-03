/*
Write a function where the Student structure
also has books they have borrowed inside,
showing nested structure usage.
*/

#include <stdio.h>

// Nested Structure
struct Book {
    char title[50];
    char author[50];
};

// Main Structure
struct Student {
    int id;
    char name[50];
    struct Book borrowedBook;
};

// Function Definition
void displayStudent(struct Student s) {

    printf("Student ID   : %d\n", s.id);
    printf("Student Name : %s\n", s.name);

    printf("Borrowed Book:\n");
    printf("Title  : %s\n", s.borrowedBook.title);
    printf("Author : %s\n", s.borrowedBook.author);
}

int main() {
    /*
     * Logic:
     * - Goal: Write a function where the Student structure also has books they have borrowed inside, showing nested structure usage.
     * - Prompts the user for required inputs.
     * - Executes standard control flow, conditions, or loops to compute the result.
     * - Prints the formatted output to the console.
     */


    struct Student student1 = {
        101,
        "Suraj",
        {"C Programming", "Dennis Ritchie"}
    };

    displayStudent(student1);

    return 0;
}