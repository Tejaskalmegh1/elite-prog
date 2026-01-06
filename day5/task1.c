// 6 jan 2026

// Write a C program to print the size of: char, int, float, double, long int, long long int

#include<stdio.h>

int main()
{
    char VarOne = 'A';
    int VarTwo;
    float VarThree;
    double VarFour;
    long int VarFive;
    long long int VarSix;

    printf("\n Size of Char: %d",sizeof(char));
    printf("\n Size of Int: %d",sizeof(int));
    printf("\n Size of Float: %d",sizeof(float));
    printf("\n Size of Double: %d",sizeof(double));
    printf("\n Size of Long Int: %d",sizeof(long int));
    printf("\n Size of Long Long Int: %d",sizeof(long long int));
    
    return 0;
}