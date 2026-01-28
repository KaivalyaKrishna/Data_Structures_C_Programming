#include <stdio.h>
int main ()
{
    int i, j, k, l, m, n;
    char ch = 'A';
    printf ("Enter the value of n - ");
    scanf ("%d", &n);
    for (i=1; i<=n; i++)
    {
        for (j=1; j<=(n-i); j++)
        {
            printf (" ");
        }
        
        for (k=65; k<=(int)ch; k++)
        {
            printf ("%c", k);
        }
        (int)ch++;

        char c_h = ((int)ch - 2);
        for (l=1; l<=(i-1); l++)
        {
            printf ("%c", c_h);
            c_h = (int)c_h - 1;
        }
        printf ("\n");
    }
    return 0;
}