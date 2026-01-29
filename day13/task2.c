// 29 jan 2026

// "Task 50: Count Even and Odd Digits
// Description: Take a number.
// Count how many digits are even and how many are odd."
// "Ex: Number = 2457
// Digits → 7, 5, 4, 2
// Even digits → 4, 2  → count = 2
// Odd digits  → 7, 5  → count = 2"

#include<stdio.h>
int main()
{
    int inputNumber, i, tempOne = 0, tempTwo = 0, EvenNumberCount = 0, OddNumberCount = 0;
    printf("\n Enter any Number: ");
    scanf("%d",&inputNumber);

    tempOne = inputNumber;
    while (tempOne > 0) {
        tempTwo = tempOne % 10;
        (tempTwo & 1) ? OddNumberCount++ : EvenNumberCount++ ; 
        tempOne /= 10;
    }

    printf("\n Even Digits: %d",EvenNumberCount);
    printf("\n Odd Digits: %d",OddNumberCount);

    return 0;    
}