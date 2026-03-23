//  16 feb 2026

// Task 66:  Basic Pointer Value
// Write a program to print the value of a variable using a pointer.
// Input: 10 Output: Value = 10

#include<stdio.h>
int main()
{
    int *ptr;
    printf("\n Enter any number: ");
    scanf("%d",ptr);
    printf("\nyour value: %d",*ptr);

    return 0;
}