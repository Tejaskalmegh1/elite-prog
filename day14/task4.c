// 05 feb 2026

// Task 54: Count Even and Odd Elements
// Description: Count how many elements are even and odd.
// Input: 1 2 3 4 5 6
// Output: Even = 3 Odd = 3

#include<stdio.h>
int main()
{
    int i, EvenCount = 0, OddCount = 0, arr[6] ;

    printf("\n Enter Aray Elements: ");
    for ( i = 0; i < 6; i++) {
        scanf("%d",&arr[i]);
    }

    for ( i = 0; i < 6; i++) {
        (arr[i] & 1) ? OddCount++ : EvenCount++ ;
    }

    printf("\n Even Elements Count: %d",EvenCount);
    printf("\n Odd Elements Count: %d",OddCount);
    
    return 0;
}