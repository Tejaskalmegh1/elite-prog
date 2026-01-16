// 16 jan 2026

// Task 44:  Leap Year
// Take a year. Check whether it is a leap year or not using conditions.

#include <stdio.h>
int main()
{
    int year;

    printf("\n Enter a year: ");
    scanf("%d", &year);

    if ((year % 400 == 0) || year % 100 != 0 && year % 4 == 0 ) {
        printf("\n %d is a Leap Year",year);
    } else {
        printf("\n %d is NOT a Leap Year",year);
    }

    return 0;
}
