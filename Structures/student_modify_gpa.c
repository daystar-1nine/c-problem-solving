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