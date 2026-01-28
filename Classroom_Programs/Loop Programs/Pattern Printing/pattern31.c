// error
#include <stdio.h>
int main ()
{
    int i, j, k, l, m, n;
    printf ("Enter the value of n - ");
    scanf ("%d", &n);
    int nsp = 0, nst = n;
    int a = 1;
    // for  (m=1; m<=n; m++)
    // {
    //     printf ("%d", a);
    //     a++;
    // }

    // a = n-1;
    // for  (m=n-1; m>=1; m++)
    // {
    //     printf ("%d", a);
    //     a--;
    // }

    // for (i=1; i<=n; i++)
    // {
        int a = 1;
        for (l=1; l<nsp; l++)
        {
            printf ("%d", a);
            a++;
        }
        nsp--;

    //     for (j=1; j<=nsp; j++)
    //     {
    //         printf ("  ");
    //     }
    //     nsp++;

    //     if (i!=n)
    //     {
    //         for (k=nst-1; k>=1; k--)
    //         {
    //             printf ("%d ", k);
    //         }
    //     }
    //     nst--;

        printf ("\n");
        //}
    return 0;
}
