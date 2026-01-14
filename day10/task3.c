// 14 jan 2026

// Task 37: Number Between Range (10 to 50)
// Take one number from the user. Check if the number is greater than or equal to 10
// And also less than or equal to 50If both conditions are true, print “Number is between 10 and 50”
// Otherwise, print “Number is not between 10 and 50”

#include<stdio.h>
int main()
{
    float number;
    printf("\n Enter any number: ");
    scanf("%f",&number);

    if ((number >= 10) && (number <= 50))
    {
        printf("\n %.2f is between 10 and 50", number);
    }
    else
    {
        printf("\n %.2f is not between 10 and 50", number);
    }
    
    return 0;    
}