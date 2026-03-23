// 13 feb 2026

// Task 63:  Remove Duplicate Elements
// Description: Remove duplicate values from the array.
// Input: 1 2 2 3 4 4
// Output: 1 2 3 4

#include<stdio.h>

int removeDuplicates(int arr[], int sizeOfArray);

int main() {

    int test[] = {1, 2, 2, 3, 4, 4};
    int sizeOfArray = sizeof(test) / sizeof(test[0]);

    int newSize = removeDuplicates(test , sizeOfArray);

    printf("\n sorted array : ");
    for(int i = 0; i < newSize; i++){
        printf("%d ",test[i]);
    }

    return 0;
}

int removeDuplicates(int arr[], int sizeOfArray){
    if (sizeOfArray == 0 || sizeOfArray == 1)
        return sizeOfArray ;
    
    int temp[sizeOfArray], i = 0;
    int is_Unique = 0;

    for(i = 0; i < sizeOfArray - 1; i++) {
        if(arr[i] != arr[i+1])
        temp[is_Unique++] = arr[i];
    }
    
    temp[is_Unique++] = arr[sizeOfArray - 1];

    for(i = 0; i < is_Unique; i++){
        arr[i] = temp[i];
    }

    return is_Unique;
}