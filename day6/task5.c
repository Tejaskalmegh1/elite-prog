// 07 jan 2026

// Task 24: Modulus Assignment (%=)
// Objective: Use %=
// Assign x = 17. Apply %= with input.
// i/p : 5
// o/p : 2


#include<stdio.h>

int main()
{
    int x = 17 , inputVar ;

    printf("\n Enter any number: ");
    scanf("%d",&inputVar);

    x %= inputVar ;

    printf("\n Remainder = %d",x);

    return 0 ;
}