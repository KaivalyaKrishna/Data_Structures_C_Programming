#include <stdio.h>
#include <math.h>
int main ()
{
    int i, n, fact=1;
    printf ("Enter the value of n - ");
    scanf ("%d", &n);

    if (n==0)
    {
        fact = 1;
        printf ("The factorial of %d is = %d", n, fact);
    }

    else
    for (i=1; i<=n; i++)
    {
        fact = fact*i;
        printf ("The factorial of %d is = %d \n", i, fact);
    }
    
    return 0;
}