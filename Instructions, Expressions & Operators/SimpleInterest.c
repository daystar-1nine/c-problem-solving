//Create a program to calculate simple interest.
//Simple Interest = (P × T × R) / 100


#include <stdio.h>
int main() {

    int principal, time;
    float interest;

    printf("Calculate Simple Interest!!!!\n\n");

    printf("Enter principal value: ");
    scanf("%d", &principal);

    printf("Enter rate of interest: ");
    scanf("%f", &interest);

    printf("Enter time period: ");
    scanf("%d", &time);

    float SI = (principal * interest * time) / 100;

    printf("Simple Interest is %.2f\n", SI);

    return 0;
}