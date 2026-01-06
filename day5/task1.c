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

    printf("\n Size of Char: %lu",sizeof(char));
    printf("\n Size of Int: %lu",sizeof(int));
    printf("\n Size of Float: %lu",sizeof(float));
    printf("\n Size of Double: %lu",sizeof(double));
    printf("\n Size of Long Int: %lu",sizeof(long int));
    printf("\n Size of Long Long Int: %lu",sizeof(long long int));
    
    return 0;
}