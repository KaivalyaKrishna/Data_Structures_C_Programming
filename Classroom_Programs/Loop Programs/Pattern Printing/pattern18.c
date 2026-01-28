#include <stdio.h>
int main ()
{
    int n, i, j, k;
    printf ("Emter the value of n - ");
    scanf ("%d", &n);
    for (i=1; i<=n; i++)
    {
        // for (j=1; j<=n; j++)
        // {
        //     if ((i+j)>n)
        //     {
        //         printf ("*");
        //     }
        //     else 
        //     {
        //         printf (" ");
        //     }
        // }

        for (j=1; j<=(n-i); j++)
        {
            printf (" ");
        }
        for (k=1; k<=i; k++)
        {
            printf ("*");
        }
        printf ("\n");
    }
    return 0;
}