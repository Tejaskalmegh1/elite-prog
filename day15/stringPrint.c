// 06 feb 2026

// Task 56: Print a String
// Description: Read a string and print it.
// Input: Hello This is Bitcode Technology.
// Output : Hello This is Bitcode Technology

#include<stdio.h>
int main()
{
    char arr[100];

    printf("\n Enter the string: ");
    // scanf("%s",arr);
    gets(arr);
 
    printf("\n Your string: %s",arr);
    
    return 0;
}