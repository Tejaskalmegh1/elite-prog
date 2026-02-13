// 05 feb 2026

// Task 52: Sum of Array Elements 
// Description: Find the sum of all elements in the array.
// Input: 1 2 3 4
// Output: Sum = 10

#include<stdio.h>
int main()
{
    int i, arr[4], sum = 0 ;

    printf("\n Enter Array Elements: ");
    for ( i = 0; i < 4; i++) {
        scanf("%d",&arr[i]);
    }
    
    for ( i = 0; i < 4; i++) {
        sum += arr[i];
    }
    printf("\n Sum of all Array Elements: %d",sum);

    return 0;
}