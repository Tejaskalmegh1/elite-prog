// 13 jan 2026

// "Task 33: Even or Odd
// Take a number. If the number is divisible by 2, print Even. Otherwise, print Odd."

#include<stdio.h>

int main()
{
   int number ;
   
   printf("\n Enter any number: ");
   scanf("%d",&number); 

    if (number % 2 == 0)
    {
        printf("\n Number is Even");
    }
    else
    {
        printf("\n Number is Odd");
    }
    
    return 0;
}