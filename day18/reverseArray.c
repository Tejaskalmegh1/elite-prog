// 13 feb 2026

// Task 65:  Reverse an Array
// Description: Reverse the array elements.
// Input: 1 2 3 4 5
// Output: 5 4 3 2 1

#include<stdio.h>

int reverseArray(int test[], int length);

int main(){
    int arr[] = { 1, 2, 3, 4, 5};
    int length = sizeof(arr) / sizeof(int);
    int i = 0;

    reverseArray(arr, length);
    printf("\n array in reverse order: ");
    
    while( i < length) {
        printf("%d ",arr[i++]);
    }
    
    return 0;
}

int reverseArray(int test[], int length) {
    
    int temp[length];
    int i = 0, j = length - 1;
    
    while( i < length ) {
        temp[i++] = test[j--] ;
    }
    
    i = 0;
    while( i < length ) {
        test[i] = temp[i];
        i++;
    }

    return 0;
}