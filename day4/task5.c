// 02 jan 2026

// Sum of first 10 natural numbers using while

#include<stdio.h>

int main()
{
    int i = 1, sum = 0;
    while (i < 11)
    {
        sum = sum + i;
        i++;
    }
    printf("\nSum of first 10 natural numbers is: %d",sum);
    return 0;
}