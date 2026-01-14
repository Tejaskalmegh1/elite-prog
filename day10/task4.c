// 14 jan 2026

// "Task 38: While Loop – Reverse Number
// Reverse a given integer. i/p: 234 , o/p: 432
// Concepts: %, /, while"

#include<stdio.h>

int main()
{
    int i = 1, j = 1, number = 234 , container ;
    
    // printf("\n Enter the number: ");
    // scanf("%d",&number);

    while (i < 4)
    {
        while (j < i)
        {        
        number = number % 10 ;
        container = number ;
        printf("\n j %d", container);
        j++;
        }
        printf("\n i %d", container);
        i++;
    }
    printf("\n out %d", container);    

    return 0;    
}