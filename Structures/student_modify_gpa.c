/*
Write a function that accepts a pointer to a
Student structure with fields for id, name,
year, gpa and modifies its grades.
*/

#include <stdio.h>

// Structure Definition
struct Student {
    int id;
    char name[50];
    int year;
    float gpa;
};

// Function Definition
void modifyGPA(struct Student *s) {

    s->gpa = 9.2;
}

int main() {
    /*
     * Logic:
     * - Goal: Write a function that accepts a pointer to a Student structure with fields for id, name, year, gpa and modifies its grades.
     * - Prompts the user for required inputs.
     * - Executes standard control flow, conditions, or loops to compute the result.
     * - Prints the formatted output to the console.
     */


    struct Student student1 = {
        101,
        "Suraj",
        2,
        7.5
    };

    printf("Before Modification:\n");
    printf("GPA = %.2f\n", student1.gpa);

    // Function Call
    modifyGPA(&student1);

    printf("\nAfter Modification:\n");
    printf("GPA = %.2f\n", student1.gpa);

    return 0;
}