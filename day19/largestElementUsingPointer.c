// 16 feb 2026

// Task 69: Find Largest Element Using Pointer
// Input: 5
//  10 25 7 40 15
// Output: 40

#include<stdio.h>
int main()
{
    int arraySize;
    printf("\n enter size of an array: ");
    scanf("%d",&arraySize);
    
    int arr[arraySize],i = 0;
    printf("\n enter array elements: ");
    for(i = 0; i< arraySize; i++){
        scanf("%d",&arr[i]);
    }

    int temp = arr[0], *largestElement;
    for(i = 0; i < arraySize; i++){
        if(arr[i] > temp){
            *largestElement = arr[i];
        }
    }

    printf("\n largest element of an array: %d",*largestElement);
    return 0;
}