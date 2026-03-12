// 09 feb 2026

// "Task 60: Compare Two Strings
// Description: Compare two strings without using strcmp().
// Input: Hello
//        Hello
// Output: Strings are Equal"

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i = 0, isEqual = 1;
    char strOne[100], strTwo[100];

    printf("\n enter first string: ");
    scanf("%s",strOne);
    printf("\n enter second string: ");
    scanf("%s",strTwo);

    while ((strOne[i] != '\0')  &&  (strTwo[i] != '\0'))  {
        if (strOne[i] != strTwo[i]) {
            isEqual = 0;
        }   
        i++;     
    }

    if (isEqual) {
        printf("\n Strings are equal");
    }
    else {
        printf("\n Strings are not equal");
    }       

    return 0;
}