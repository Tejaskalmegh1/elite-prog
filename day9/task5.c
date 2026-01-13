// 13 jan 2026

// "Task 34: Print 1 to N (While Loop)
// Description: Take one number N from the user. Start a number from 1. Print the number.
// Increase the number by 1 each time.
// Stop when the number becomes greater than N."

#include<stdio.h>
int main()
{
    int n, i = 1 ;
    
    printf("\n Enter any number: ");
    scanf("%d",&n);

    while (i <= n)
    {
        printf("\n %d ",i);
        i++;
    }
    
    return 0;
}