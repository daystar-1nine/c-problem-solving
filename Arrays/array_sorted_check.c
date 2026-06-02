/*
Create a program to check if the given array is sorted.
*/

#include <stdio.h>

int main() {
    int arr[5], i;
    int isSorted = 1;

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < 4; i++) {

        if(arr[i] > arr[i + 1]) {
            isSorted = 0;
            break;
        }
    }

    if(isSorted == 1) {
        printf("Array is Sorted.\n");
    } else {
        printf("Array is NOT Sorted.\n");
    }

    return 0;
}