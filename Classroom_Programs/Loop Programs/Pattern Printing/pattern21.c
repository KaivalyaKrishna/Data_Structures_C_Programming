#include <stdio.h>
int main ()
{
    int a = 1, n, i, j, k, l;
    printf ("Emter the value of n - ");
    scanf ("%d", &n);
    for (i=1; i<=n; i++)
    {
        // for (j=1; j<=(n-i); j++)
        // {
        //     printf (" ");
        // }
        // for (k=1; k<=i; k++)
        // {
        //     printf ("*");
        // }
        // for (l=2; l<=(i); l++)
        // {
        //     printf ("*");
        // }

        for (j=1; j<=(n-i); j++)
        {
            printf (" ");
        } 
        for (j=1; j<=a; j++)
        {
            printf ("*");
        }
        a = a+2;
        
        printf ("\n");
    }
    return 0;
}