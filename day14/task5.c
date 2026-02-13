// 05 feb 2026

// Task 55: Linear Search
// Description: Check whether a given number exists in the array.
// Input: 10 20 30 40 50
// User enters : 30
// Output: Element Found

#include<stdio.h>
int main()
{
    int inputNumber, i, arr[5], flag = 0;

    printf("\n Enter Five Array Elements: ");
    for ( i = 0; i < 5; i++) {
        scanf("%d",&arr[i]);
    }

    printf("\n Enter Element to search: ");
    scanf("%d",&inputNumber);

    for ( i = 0; i < 5; i++) {
        if (inputNumber == arr[i]) {
            printf("\n %d element Found on index number %d",inputNumber,i);
            flag = 1;
        }
    }

    if (flag == 0) {
        printf("\n %d is not present",inputNumber);
    }

    return 0;
}