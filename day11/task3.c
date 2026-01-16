// 16 jan 2026

// Task 43:  Grade System 
// Take marks from the user. If marks are high, print Distinction.
// If marks are medium, print First Class or Second Class. If marks are low, print Fail.

#include<stdio.h>
int main()
{
    int obtainMarks ;
    printf("\n Enter Marks obtain: ");
    scanf("%d",&obtainMarks);

    if ((obtainMarks >= 80) && (obtainMarks <= 100)) {
        printf("\n Distinction");
    }

    else if ((obtainMarks >= 60) && (obtainMarks < 80)) {
        printf("\n First Class");
    }

    else if ((obtainMarks >= 40) && (obtainMarks < 60)) {
        printf("\n Second Class");
    }

    else {
        printf("\n Fail");        
    }
    
    return 0;
}