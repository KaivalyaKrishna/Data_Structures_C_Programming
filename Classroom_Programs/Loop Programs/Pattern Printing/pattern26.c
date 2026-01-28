#include <stdio.h>
int main ()
{
    int i, j, k, l, m, n;
    printf ("Enter the value of n (odd number) - ");
    scanf ("%d", &n);
    int nsp = (n/2), nst = 1;
    for (i=1; i<=n; i++)
    {
        for (j=1; j<=nsp; j++)
        {
            printf (" ");
        }

        for (k=1; k<=nst; k++)
        {
            printf ("*");
        }
        if (i<(n/2+1)) // middle line = ((n/2)+1)
        {
            nsp--;
            nst+=2;
        }
        else 
        {
            nsp++;
            nst-=2;
        }
        
        printf ("\n");
    }
    return 0;
}