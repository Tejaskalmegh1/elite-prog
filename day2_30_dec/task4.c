// Understand variable assignment, Declare two integers x = 10, y = 20 Print values before swap and after swap (use a third variable)

#include<stdio.h>

int main()
{
    int x = 10, y = 20 , z ;
    printf("- - - Before Swap - - -");
    printf("\nx = %d y = %d",x,y);
    z = x + y ;
    y = z - y ;
    x = z - x ;
    printf("\n\n- - - After Swap - - -");
    printf("\nx = %d y = %d",x,y);
    return 0;
}