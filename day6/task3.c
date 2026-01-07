// 07 jan 2026

// Task 22: Assign Float Value
// Objective: Assignment with float
// Assign a float value to a variable and print it with 2 decimal places.
// i/p: 3.456 o/p: 3.46

#include<stdio.h>

int main()
{
    float varOne ;

    printf("\n Enter the number: ");
    scanf("%f",&varOne);

    printf("\n Your Number is: %.2f",varOne);

    return 0;
}