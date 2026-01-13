// 13 jan 2026

// "Task 31: (Arithmetic Operators)
// Read two integers and print: Sum, Difference, Product, Quotient
// Concepts: + - * /, int, float"

#include<stdio.h>
int main()
{
    float numberOne, numberTwo, Sum, Difference, Product, Quotient;
    printf("\n Enter number One: ");
    scanf("%f",&numberOne);
    printf("\n Enter number Two: ");
    scanf("%f",&numberTwo);
    
    Sum = numberOne + numberTwo ;
    Difference = numberOne - numberTwo ;
    Product = numberOne * numberTwo ;
    Quotient = numberOne / numberTwo ;

    printf("\n Sum of two numbers: %.2f",Sum);
    printf("\n Difference of two numbers: %.2f",Difference);
    printf("\n Product of two numbers: %.2f",Product);
    printf("\n Quotient of two numbers: %.2f",Quotient);

    return 0;
}