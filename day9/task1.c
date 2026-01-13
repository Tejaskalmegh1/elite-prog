// 13 jan 2026

// Task 30: Check whether a number is positive, negative, or zero
// Concepts: int, if-else

#include<stdio.h>
int main()
{
    int number;
    printf("\n Enter any number to check Positive, Negative or zero: ");
    scanf("%d",&number);
    
    if (number > 0)
    {
        printf("\n Number is Positive");
    }
    else if (number < 0)
    {
        printf("\n Number is Negative");
    }
    else
    {
        printf("\n Number is Zero");
    }
    
    return 0;
}