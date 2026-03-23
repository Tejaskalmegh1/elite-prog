// 16 feb 2026

// Task 68:  Add Two Numbers Using Pointers
// Input: 4 6
// Output: 10

#include<stdio.h>
int main()
{
    int firstNumber, secondNumber, *numberOne, *numberTwo, sum;
    printf("\n enter first number: ");
    scanf("%d",&firstNumber); 
    printf("\n enter second number: ");
    scanf("%d",&secondNumber);
    
    numberOne = &firstNumber;
    numberTwo = &secondNumber;
    sum = *numberOne + *numberTwo;

    printf("\n addition: %d",sum);
    return 0;
}
