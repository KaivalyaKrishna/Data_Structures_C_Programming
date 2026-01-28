#include <stdio.h>
int main ()
{
    int n, i, j, k;
    printf ("Enter the value of n - ");
    scanf ("%d", &n);
    for (i=1; i<=n; i++)
    {
        for (j=1; j<=(n-i); j++)
        {
            printf (" ");
        }
        char ch = 'A';
        for (k=1; k<=i; k++)
        {
            printf ("%c", ch);
            (int)ch++;
        }
        printf ("\n");
    }
    return 0;
}