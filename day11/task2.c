// 16 jan 2026

// Task 42: Largest of Two Numbers
// Take two numbers from the user. Compare them and print which number is greater.

#include<stdio.h>
int main()
{
    float numberOne, numberTwo;

    printf("\n Enter First Number: ");
    scanf("%f",&numberOne);
    printf("\n Enter Second Number: ");
    scanf("%f",&numberTwo);

    if (numberOne > numberTwo) {
        printf("\n %.2f is greater ",numberOne);
    }

    else {
        printf("\n %.2f is greater",numberTwo);
    }
    

    return 0;
}