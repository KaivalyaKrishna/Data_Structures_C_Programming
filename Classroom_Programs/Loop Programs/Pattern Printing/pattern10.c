#include <stdio.h>
int main ()
{
    int n, i, j;
    printf ("Emter the value of n - ");
    scanf ("%d", &n);
    for (i=1; i<=n; i++)
    {
        char ch = 'A';
        for (j=1; j<=i; j++)
        {
            printf ("%c ", ch);
            ch = (int)ch+1;
        }
        
        printf ("\n");
    }
    return 0;
}