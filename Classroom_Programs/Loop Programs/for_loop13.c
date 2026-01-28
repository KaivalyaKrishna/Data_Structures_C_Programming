#include <stdio.h>
int main ()
{
    int i, n, a;
    printf ("Enter the value of n - ");
    scanf ("%d", &n);
    a = 100;
    
    for (i=1; i<=n; i++)
    {
        if (a>0)
        {
        printf ("%d ", a);
        a = a-3;
        }
    }

    printf ("\n");

    a = 100;
    for (i=1; a>0; i++)
    {
        printf ("%d ", a);
        
    }
    
    return 0;
}