#include <stdio.h>
#include <stdlib.h>

struct Point {
    int x;
    int y;
};

int main() {
    /*
     * Logic:
     * - Goal: Dynamically allocates memory for a point structure, stores coordinate values, and releases memory.
     * - Prompts the user for required inputs.
     * - Executes standard control flow, conditions, or loops to compute the result.
     * - Prints the formatted output to the console.
     */

    struct Point *p;

    p = (struct Point *)malloc(sizeof(struct Point));

    if (p == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // assign values
    p->x = 10;
    p->y = 20;

    printf("Point: (%d, %d)\n", p->x, p->y);

    free(p);

    return 0;
}