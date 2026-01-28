#include <stdio.h>
int main ()
{
    int i, n, a;
    printf ("Enter the value of n - ");
    scanf ("%d", &n);
    a = 1;
    for (i=1; i<=n; i++)
    {
        printf ("%d ", a);
        a = a*2;
    }
    return 0;
}