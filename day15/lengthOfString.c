// 06 feb 2026

// Task 57: Length of String (No strlen)
// Description: Find the length of the string without using library functions.
// Input: Bitcode
// Output: Length = 7

#include<stdio.h>
int main()
{
    char inputString[100];
    int stringLenght = 1;
    printf("\n enter any string: ");
    gets(inputString);
    
    for (int i = 1; inputString[i] != '\0'; i++) {
        stringLenght++;
    }
    printf("\n String Length: %d",stringLenght);
    
    return 0;
}