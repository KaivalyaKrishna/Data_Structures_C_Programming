#include <stdio.h>
int main ()
{
    int i, j, k, l, m, n;
    printf ("Enter the value of n - ");
    scanf ("%d", &n);
    for  (m=1; m<=((2*n)+1); m++)
    {
        printf ("*");
    }
    printf ("\n");

    int nsp = 1, nst = n;
    for (i=1; i<=n; i++)
    {
        for (j=1; j<=nst; j++)
        {
            printf ("*");
        }

        for (k=1; k<=nsp; k++)
        {
            printf (" ");
        }
        nsp+=2;


        for (l=1; l<=nst; l++)
        {
            printf ("*");
        }
        nst--;
        printf ("\n");
    }
    return 0;
}