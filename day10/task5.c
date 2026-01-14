// 14 jan 2026

// "Task 39: For Loop – Factorial
// Find factorial of a number. i/p: 3! , o/p: 6
// Concepts: for, long int"

#include<stdio.h>
int main()
{
    int i, givenNumber, flag = 1;
    long int factorial;
    
    printf("\n Enter any Number: ");
    scanf("%d",&givenNumber);

    for ( i = 1; i < givenNumber+1 ; i++)
    { 
        flag = flag * i ;
        factorial = flag ;

    }

    printf("\n Factorial of a given number: %ld",factorial);

    return 0;
    
}