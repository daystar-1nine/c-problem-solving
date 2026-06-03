/*
Question 46:
Create a program using for loop to display
if a number is prime or not.
*/

#include <stdio.h>

int main() {
    /*
     * Logic:
     * 1. Confirms the input 'num' is successfully read with scanf.
     * 2. Any integer less than or equal to 1 is automatically not prime (isPrime = 0).
     * 3. Loops through divisors 'i' starting from 2 up to the square root of 'num' (i * i <= num).
     *    This optimizes the complexity to O(sqrt(n)) since any composite number must have a factor <= sqrt(n).
     * 4. If any 'i' divides 'num' perfectly (num % i == 0), flags the number as non-prime and breaks out of the loop.
     * 5. Prints whether the number is a Prime or not.
     */
    int num, i, isPrime = 1;

    printf("Enter a number: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if(num <= 1) {
        isPrime = 0;
    } else {

        for(i = 2; i * i <= num; i++) {
            if(num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if(isPrime == 1) {
        printf("%d is a Prime Number.\n", num);
    } else {
        printf("%d is NOT a Prime Number.\n", num);
    }

    return 0;
}