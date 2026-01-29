// 29 jan 2026

// Task 49: Strong Number
// Description: Take a number. Find factorial of each digit. Add them.
// If the sum equals the original number, it is a Strong number
// Ex: 145
// Digits: 1, 4, 5
// 1! = 1
// 4! = 4 × 3 × 2 × 1 = 24
// 5! = 5 × 4 × 3 × 2 × 1 = 120
// Sum = 1 + 24 + 120 = 145

#include<stdio.h>
int main()
{
    int inputNumber, tempTwo = 1, temp, Fact = 1, SumOfDigits = 0, i;
    printf("\n Enter Any Number: ");
    scanf("%d",&inputNumber);

    temp = inputNumber;

    while (temp > 0) {
        Fact = temp % 10; 
        tempTwo = 1;
        
        for ( i = 1; i <= Fact; i++) {  
             tempTwo *= i;                
        }
       
        Fact = tempTwo;
        SumOfDigits = SumOfDigits + Fact;
        temp = temp / 10;        
    }
    printf("\n sum = %d",SumOfDigits);

    (SumOfDigits == inputNumber) ? printf("\n%d is a Strong Number",SumOfDigits) : printf("\n%d is Not Strong Number",SumOfDigits); 

    return 0;

}