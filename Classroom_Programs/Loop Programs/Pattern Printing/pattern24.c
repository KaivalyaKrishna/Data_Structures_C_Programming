#include <stdio.h>
int main ()
{
    int i, j, k, l, m, n;
    printf ("Enter the value of n - ");
    scanf ("%d", &n);
    for (i=1; i<=n; i++)
    {
        for (j=1; j<=(n-i); j++)
        {
            printf (" ");
        }

        for (k=1; k<=i; k++)
        {
            printf ("%d", k);
        }

        m=i-1;
        for (l=1; l<=(i-1); l++)
        {
            printf ("%d", m);
            m--;
        }
        printf ("\n");
    }
    return 0;
}