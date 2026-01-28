// error
#include <stdio.h>
int main ()
{
    int i, j, k, l, m, n, a;
    printf ("Enter the value of n - ");
    scanf ("%d", &n);
    n=m;
    a=1;
    for (i=1; i<=((2*n)-1); i++)
    {
        if (i==a || i==m)
        {
            for (j=1; j<=((2*n)-1); j++)
            if (j==a || j==m)
            {
                printf ("%d", a);
            }
        }
        a++;
        m--;
        printf ("\n");
    }
    return 0;
}