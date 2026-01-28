#include <stdio.h>
int main ()
{
    int a, n, i, j, k, l;
    printf ("Emter the value of n - ");
    scanf ("%d", &n);
    a=1;
    for (i=1; i<=n; i++)
    {
        
        for (j=1; j<=(n-i); j++)
        {
            printf (" ");
        } 
        for (j=1; j<=a; j++)
        {
            printf ("%d", j);
        }
        a = a+2;

        printf ("\n");
    }
    return 0;
}