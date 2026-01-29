// 21 jan 2026

// "Task 45: Armstrong Number
// Description: Take a number. Add the cube of each digit.
//  If the result is the same number, print Armstrong. EX: 153 = 1³ + 5³ + 3³
//     = 1 + 125 + 27
//     = 153

#include<stdio.h>
int main()
{
    int inputNumber, sum = 0, containerOne, containerTwo = 0;
    printf("\n Enter any Number: "); // 153
    scanf("%d",&inputNumber);
    
    containerOne = inputNumber ;

    while ( containerOne > 0 ) {

        containerTwo = containerOne % 10 ; 
        sum = sum + (containerTwo * containerTwo * containerTwo); 
        containerOne = containerOne / 10 ; 
    }
    
    if (sum == inputNumber) {
        printf("\n %d is a Armstrong number",sum);
    } else {
        printf("\n %d is not Armstrong number",sum) ;       
    }    

    return 0;
}