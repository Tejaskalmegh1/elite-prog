// 14 jan 2026

// "Task 35: Multiplication Table
// Description: Take a number. Print its multiplication table (example: 2 × 1, 2 × 2, etc.)."

#include<stdio.h>
int main()
{
    int number, i;
    printf("\n Enter any number: ");
    scanf("%d",&number);

    for ( i = 1; i < 11 ; i++)
    {
        printf("\n %d * %d = %d",number,i,number*i);
    }

    return 0;    
}