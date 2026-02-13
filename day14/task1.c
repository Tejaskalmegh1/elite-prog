// 05 feb 2026

// Task 51: Print Array Elements 
// Description: Take N integers in an array and print them in the same order.
// I/P: 5
// 10 20 30 40 50
// O/P: 10 20 30 40 50

#include<stdio.h>
int main()
{
    int i, arr[5];

    printf("\n Enter Array Elements: ");
    for ( i = 0; i < 5; i++) {
        scanf("%d",&arr[i]);
    }

    printf("\n Array Elements: ");
    for ( i = 0; i < 5; i++) {
        printf(" %d",arr[i]);
    }

    return 0;    
}
