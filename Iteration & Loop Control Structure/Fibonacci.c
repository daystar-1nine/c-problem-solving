//Program to print Fibonacci series up to a certain number

#include<stdio.h>

int main() {

    int n, first = 0, second = 1, next;

    printf("Enter limit: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    while(first <= n) {
        printf("%d ", first);

        next = first + second;
        first = second;
        second = next;
    }

    return 0;
}