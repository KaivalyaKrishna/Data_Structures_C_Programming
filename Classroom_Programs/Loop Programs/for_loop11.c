#include <stdio.h>
int main ()
{
    int i, n, a;
    printf ("Enter the value of n - ");
    scanf ("%d", &n);

    // usimg mathmatics
    for (i=4; i<=((3*n)+1); i=i+3)
    {
        printf ("%d ", i);
    }

    printf ("\n");
    
    // without using mathematics
    a = 4;
    for (i=1; i<=(n); i++)
    {
        printf ("%d ", a);
        a = a+3;
    }
    return 0;
}