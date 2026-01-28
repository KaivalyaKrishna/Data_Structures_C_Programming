#include <stdio.h>

int factorial (int a)
{
    int fact = 1, i;
    for (i=1; i<=a; i++)
    {
        fact *= i;
    }
    return fact;
}
int main ()
{
    int a, b, fact, i;
    printf ("Enter the number - ");
    scanf ("%d", &a);

    fact = factorial (a);
    printf ("Factorial of %d is = %d", a, fact);
    return 0;
}