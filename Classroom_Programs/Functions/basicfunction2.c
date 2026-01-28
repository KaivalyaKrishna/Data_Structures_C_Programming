#include <stdio.h>
#include <math.h>
int main ()
{
    int a, b, c;
    // printf ("Enter the number - ");
    // scanf ("%d", &a);
    // b = sqrt (a);
    // printf ("The square root of %d is = %d", a, b);
    
    printf ("Enter the number and the power - ");
    scanf ("%d %d", &a, &b);
    c = pow (a,b);
    printf ("The required answer is = %d", c);
    
    return 0;
}