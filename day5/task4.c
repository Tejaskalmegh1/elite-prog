// 06 jan 2026

// Write a program where One variable is global and One variable is local print both inside and outside a function 

#include<stdio.h>

int GlobalVar = 7;

void demo()
{
    int LocalVar = 5;
    printf("\n Local Variable is: %d",LocalVar);
}

int main()
{
    printf("\n Global Variable is: %d",GlobalVar); 
    demo();
    return 0 ;
}