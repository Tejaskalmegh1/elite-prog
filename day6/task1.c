// 07 jan 2025

// Task 20: Assign and Modify (Simple Explanation)
// What we are doing:
// Take a number and store it in a variable.
// Add 5 to that variable.
// Print the final value. Ex. i/p: 3     o/p: 8 

#include<stdio.h>

int main()
{
    int varOne = 3 ;
    
    printf("\n Before: %d",varOne);
    varOne += 5;
    printf("\n After: %d",varOne);
    
    return 0;
}