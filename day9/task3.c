// 13 jan 2026

// "Task 32: Largest of Two Numbers
// Take two numbers. Compare them and print which number is greater."

#include<stdio.h>

int main()
{
   float numberOne, numberTwo;
   
   printf("\n Enter number One: ");
   scanf("%f",&numberOne);
   
   printf("\n Enter number Two: ");
   scanf("%f",&numberTwo); 

    if (numberOne > numberTwo)
    {
        printf("\n Number One is Greater");
    }
    else
    {
        printf("\n Number Two is Greater");
    }
    
    return 0;
}