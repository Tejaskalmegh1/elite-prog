// 13 feb 2026

// "Task 64: Largest Element (Top Companies)
// Description: Find the second largest number in the array.
// Input: 10 40 30 20 50 60
// Output: Second Largest = 50

#include<stdio.h>

int find_Second_Largest(int test[], int length);

int main() {

    int arr[] = { 10, 40, 30, 20, 50, 60 };
    int length = sizeof(arr) / sizeof(int);

    int secondLargestElement = find_Second_Largest(arr, length);

    printf("\n second largest element is: %d",secondLargestElement);

    return 0;
}

int find_Second_Largest(int test[], int length) {
    int largestElement, secondLargest;

    if(test[0] > test[1]){
        largestElement = test[0];
        secondLargest = test[1];
    }
    else {
        largestElement = test[1];
        secondLargest = test[0];
    }

    for(int i = 2; i < length; i++) {
        if( test[i] > largestElement ) {
        secondLargest = largestElement;
        largestElement = test[i];
        }
        else if (test[i] > secondLargest && test[i] < largestElement) {
            secondLargest = test[i];
        }        
    }

    return secondLargest;
}