// Task 53: Find Maximum Element 
// Description: Find the largest element in the array.
// Input: 2 8 1 9 4
// Output: Largest = 9

#include<stdio.h>
int main()
{
    int i, largElement = 0, arr[5] = {2,8,1,9,4};
    largElement = arr[0];
    
    for ( i = 0; i < 5; i++) {
        if (largElement < arr[i]) {
            largElement = arr[i];
        }
    }
    printf("\n Largest Element in an Array: %d",largElement);

    return 0;
}