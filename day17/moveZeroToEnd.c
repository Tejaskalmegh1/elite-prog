// 12 feb 2026

// "Task 62: Move All Zeros to End
// Description: Move all zeros to the end without changing order of other elements.
// Input: 0 1 0 3 12 0 5
// Output: 1 3 12 5 0 0 0

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int sizeOfArray, i, count = 0;
    printf("\n enter size of array : ");
    scanf("%d",&sizeOfArray);
    int *ptr = (int*)calloc(sizeOfArray, sizeOfArray * sizeof(int));
    
    
    printf("\n enter array elements: ");
    for ( i = 0; i < sizeOfArray; i++) {
        scanf("%d",ptr+i);
    }
    
    for ( i = 0; i < sizeOfArray; i++) {
        if(*(ptr+count) != *(ptr+i)){
            *(ptr+count) = *(ptr+i);
            count++;
        }
    }
    
    while(count < sizeOfArray){
        *(ptr+count) = 0;
        count++;
    }
    
    printf("\n array elements: ");
    for ( i = 0; i < sizeOfArray; i++) {
        printf("%d ",*(ptr+i));
    }
        
    return 0;
}