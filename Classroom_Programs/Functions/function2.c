#include <stdio.h>
// int combination (int a, int b)
// {
//     long long fact1 = 1, fact2 = 1, fact3 = 1, i, c, d;
//     for (i=1; i<=a; i++)
//     {
//         fact1 *= i;
//     }
//     for (i=1; i<=b; i++)
//     {
//         fact2 *= i;
//     }
//     d = a-b;
//     for (i=1; i<=d; i++)
//     {
//         fact3 *= i;
//     }

//     c = ((fact1)/(fact2*fact3));
//     return c;
// }
// int main ()
// {
//     long long n, r, c;
//     printf ("Enter the value of n and r - ");
//     scanf ("%lld %lld", &n, &r);
//     int combination ();
//     c = combination (n, r);
//     printf ("The required value is = %lld", c);

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
    long long n, r, c;
    printf ("Enter the value of n and r - ");
    scanf ("%lld %lld", &n, &r);
    long long combination ();
    c = combination (n,r);
    printf ("The required value is = %lld", c);
    return 0;
}