#include <stdio.h>
long long factorial (int a)
{
    long long fact = 1;
    for (int i=1; i<=a; i++)
    {
        fact *= i;
    }
    return fact;
}

long long combination (int n, int r)
{
    long long c;
    long long factorial ();
    c = ((factorial (n))/(factorial(r)*factorial(n-r)));
    return c;
}

int main ()
{
    int i, j, n, a;
    printf ("Enter the value of n - ");
    scanf ("%d", &n);
    
    for (i = 0; i<=n; i++)
    {
        for (j=0; j<=i; j++)
        {
            long long combination ();
            a = combination (i, j);
            printf ("%lld\t", a);
        }
        printf ("\n");
    }
    return 0;
}