// 12 feb 2026

// "Task 61:  Find Missing Number
// Description: Array contains numbers from 1 to N with one number missing. Find it.
// Input: 1 2 4 5
// Output: Missing Number = 3

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i, n, isMissing, arraySum = 0;
    printf("\n enter value of n: ");
    scanf("%d",&n);

    int *ptr = (int*)malloc(n * sizeof(int));
    
    printf("\n enter array elements: ");
    for (i = 0; i < n ; i++) {
        scanf("%d",ptr+i);
    }

    int total = (n * (n+1)) / 2;
    for (i = 0; *(ptr+i) != '\0'; i++) {
        arraySum += (*(ptr+i));
    }

    isMissing = arraySum - total;
    printf("\n missing number is: %d",isMissing);
    
    free(*ptr);
    return 0;
}