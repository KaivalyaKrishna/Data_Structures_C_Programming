#include <stdio.h>
int main ()
{
    int m, n, i, j, k;
    printf ("Emter the value of m and n - ");
    scanf ("%d %d", &m, &n);;
    for (i=1; i<=m; i++)
    {

        for (j=1; j<=(m-i); j++)
        {
            printf (" ");
        }
        for (k=1; k<=m; k++)
        {
            printf ("*");
        }
        printf ("\n");
    }
    return 0;
}