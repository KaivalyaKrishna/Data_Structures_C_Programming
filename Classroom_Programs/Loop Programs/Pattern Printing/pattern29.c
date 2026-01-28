#include <stdio.h>
int main ()
{
    int i, j, k, l, m, n, a;
    printf ("Enter the value of n - ");
    scanf ("%d", &n);
    for  (m=1; m<=((2*n)+1); m++)
    {
        printf ("%d", m);
    }
    printf ("\n");

    int nsp = 1, nst = n;
    for (i=1; i<=n; i++)
    {
        a = 1;
        for (j=1; j<=nst; j++)
        {
            printf ("%d", a);
            a++;
        }

        for (k=1; k<=nsp; k++)
        {
            printf (" ");
            a++;
        }
        nsp+=2;


        for (l=1; l<=nst; l++)
        {
            printf ("%d", a);
            a++;
        }
        nst--;
        printf ("\n");
    }
    return 0;
}