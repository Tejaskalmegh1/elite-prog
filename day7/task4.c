// 09 jan 2026

// Task 28: Increment & Decrement Trap (MOST ASKED)
// Objective: Post vs Pre
// Predict output:
// int a = 5;
// printf("%d %d", a++, ++a);
// Follow-up question asked by interviewer: Is this behavior well-defined? 

#include<stdio.h>

int main()
{
    int a = 5;
    printf("%d %d", a++, ++a);
    return 0;
}