// 3. Program using infinite loop and break statement

#include<stdio.h>

int main() {

    int num;

    while(1) {

        printf("Enter a number (-1 to exit): ");
        scanf("%d", &num);

        if(num == -1) {
            break;
        }

        printf("Square = %d\n", num * num);
    }

    printf("Program Ended");

    return 0;
}