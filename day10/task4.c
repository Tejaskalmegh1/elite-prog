// 14 jan 2026

// "Task 38: While Loop – Reverse Number
// Reverse a given integer. i/p: 234 , o/p: 432
// Concepts: %, /, while"

#include<stdio.h>

int main()
{
    int inputNumber , container ;
    
    printf("\n Enter the number: ");
    scanf("%d",&inputNumber);
    
    while (inputNumber > 0)
    {
        container = inputNumber % 10 ;
        printf("%d",container);
        inputNumber = inputNumber / 10 ;
    }

    return 0;    
}