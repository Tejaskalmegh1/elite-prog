// 21 jan 2026

// "Task 47: Count Digits
// Description: Take a number. Count how many digits it has. Example: 4567 → 4 digits."

#include<stdio.h>
int main()
{
    int inputNumber, container, count = 0 ;
    printf("\n Enter any number: ");
    scanf("%d",&inputNumber);

    while (inputNumber > 0) {
        container = inputNumber % 10;
        inputNumber = inputNumber / 10;
        count++;
    }
    
    printf("\n Number of Digits: %d",count);
    return 0;
}