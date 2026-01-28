#include <stdio.h>
int main ()
{
    int i, a = 1, b = 1, n, fibbo = 1;
    printf ("Enter the value of n - ");
    scanf ("%d", &n);
        
    for (i=1; i<=(n-2); i++)
    {     
        fibbo = (a + b); // change the values of a and b after the sum (fibbo) is completed.
        a = b;
        b = fibbo;
    }
    
    printf ("The nth fabonacci number is = %d \n", fibbo);
    return 0;
}