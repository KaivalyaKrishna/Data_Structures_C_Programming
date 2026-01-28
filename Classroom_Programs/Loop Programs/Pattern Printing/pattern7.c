#include <stdio.h>
int main ()
{
    int n, i, j;
    printf ("Emter the value of n - ");
    scanf ("%d", &n);
    for (i=1; i<=n; i++)
    {
        for (j=1; j<=(2*n-1); j=j+2)
        {
            printf ("%d ", j);
        }
        printf ("\n");
    }
    return 0;
}