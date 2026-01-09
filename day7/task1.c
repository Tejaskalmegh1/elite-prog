// 09 jan 2026

// Task 25: Basic Arithmetic Operation
// Objective: Operator usage
// Write a C program to: Take two integers Print sum, difference, product, quotient, remainder
// Interview Follow-up: What happens if divisor is zero?

#include<stdio.h>

int main()
{
    int numberOne, numberTwo;

    printf("\n Enter First Number: ");
    scanf("%d",&numberOne);
    printf("\n Enter Second Number: ");
    scanf("%d",&numberTwo);

    printf("\n Sum of two integers is: %d",numberOne+numberTwo);
    printf("\n Difference of two integers is: %d",numberOne-numberTwo);
    printf("\n Product of two integers is: %d",numberOne*numberTwo);
    printf("\n Quotient of two integers is: %d",numberOne/numberTwo);
    printf("\n Remainder of two integers is: %d",numberOne%numberTwo);

    return 0;
}