// 2. Program using continue to print only even numbers

#include<stdio.h>

int main() {

    int n;

    printf("Enter limit: ");
    scanf("%d", &n);

    printf("Even numbers are:\n");

    for(int i = 1; i <= n; i++) {

        if(i % 2 != 0) {
            continue;
        }

        printf("%d ", i);
    }

    return 0;
}