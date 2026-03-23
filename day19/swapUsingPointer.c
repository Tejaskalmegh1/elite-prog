//  16 feb 2026

// Task 67:  Swap Two Numbers Using Pointers
// Input:  5 10
// Output:  10 5

#include<stdio.h>
int main()
{
    int *ptrOne, *ptrTwo;
    printf("\n Enter first number: ");
    scanf("%d",ptrOne);
    printf("\n Enter second number: ");
    scanf("%d",ptrTwo);

    int numberOne = ptrOne, temp;
    int numberTwo = ptrTwo;

    temp = numberOne;
    numberOne = numberTwo;
    numberTwo = temp;

    printf("\n First number: %d",*ptrOne);
    printf("\n Second number: %d",*ptrTwo);

    return 0;
}