// 06 jan 2026

// Using Addition & Subtraction Swap Two float Variables (Without Temp Variable)

#include<stdio.h>

int main()
{
    float NumOne = 11 , NumTwo = 22 ;

    printf("\n Before Swap ");
    printf("\n NumOne: %f , NumTwo: %f",NumOne,NumTwo);
    
    NumOne = NumOne + NumTwo ;
    NumTwo = NumOne - NumTwo ;
    NumOne = NumOne - NumTwo ;

    printf("\n After Swap ");
    printf("\n NumOne: %f , NumTwo: %f",NumOne,NumTwo);
    
    return 0;
}