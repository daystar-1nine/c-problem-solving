/*
Create a program to return a new array deleting
a specific element.
*/

#include <stdio.h>

int main() {
    int arr[10], newArr[10];
    int i, n, element, j = 0;

    printf("Enter number of elements (1-10): ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (n < 1 || n > 10) {
        printf("Invalid number of elements. Must be between 1 and 10.\n");
        return 1;
    }

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid element input.\n");
            return 1;
        }
    }

    printf("Enter element to delete: ");
    if (scanf("%d", &element) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    for(i = 0; i < n; i++) {

        if(arr[i] != element) {
            newArr[j] = arr[i];
            j++;
        }
    }

    printf("New array:\n");

    for(i = 0; i < j; i++) {
        printf("%d ", newArr[i]);
    }

    return 0;
}