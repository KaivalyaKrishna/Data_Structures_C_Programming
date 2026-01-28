#include <stdio.h>
int main ()
{
    int m, n, i, j;
    printf ("Emter the value of m and n (odd number) - ");
    scanf ("%d %d", &m, &n);
    for (i=1; i<=m; i++)
    {
        for (j=1; j<=n; j++)
        {
            if (i==j || j==n+1-i) 
            {
                printf ("*");
            
            }
            else 
            {
                printf (" ");
                
            }
        }
        printf ("\n");
    }
    return 0;
}