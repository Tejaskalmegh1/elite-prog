// 09 feb 2026

// Task 59: Reverse a String
// Description: Reverse the given string.
// Input: Cprogram
// Output: margorpC

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i, j;
    char *ptr = (char*)malloc(sizeof(char));
    printf("\n enter any name: ");
    scanf("%s",ptr);
    
    i = 0;
    printf("\n given string: ");
    while (*(ptr+i) != '\0') {
        printf("%c",*(ptr+i));
        i++;
    }
    
    j = --i;
    printf("\n Reverse of given string: ");
    while (*(ptr+j) != '\0') {
        printf("%c",*(ptr+j));
        j--;
    }

    free(*ptr);

    return 0;
}