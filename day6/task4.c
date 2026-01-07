// 07 jan 2026

// Task 23: Add Assignment (+=)
// Objective: Use +=
// Initialize a variable with 10. Take input and add it using +=.
// i/p: 5 o/p: 15

#include<stdio.h>

int main()
{
    int varOne = 5 , inputVar ;

    printf("\n Enter any number: ");
    scanf("%d",&inputVar);

    varOne += inputVar ;

    printf("\n Result = %d",varOne);

    return 0 ;
}