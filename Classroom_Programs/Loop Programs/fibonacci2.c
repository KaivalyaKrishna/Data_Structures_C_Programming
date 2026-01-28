#include <stdio.h>
int main ()
{
    int i, n, fibbo = 1, a=1, b=1;
    printf ("Enter the value of n - ");
    scanf ("%d", &n);

    printf ("The 1th fibonacci number is = 1 \n");
    printf ("The 2th fibonacci number is = 1 \n");

    for (i=1; i<=(n-2); i++)
    {
        fibbo = a + b;
        a = b;
        b = fibbo;
        printf ("The %dth fibonacci number is = %d \n", i+2, fibbo);
    }
    return 0;
}