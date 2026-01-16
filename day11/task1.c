// 16 jan 2026

// Task 41: Positive / Negative / Zero
// Take one number from the user. If the number is greater than 0, print Positive. If it is less than 0, print Negative.
// If it is 0, print Zero.

#include<stdio.h>
int main()
{
    int number;
    printf("\n Enter any Number: ");
    scanf("%d",&number);

    if (number > 0) {
        printf("\n Positive ");
    }

    else if (number < 0) {
        printf("\n Negative ");
    }

    else {
        printf("\n Zero");
    }

    return 0;

}