#include <stdio.h>

int* minimum (int* a, int* b)
{
    if (*a>*b)
    {
        return a;
    }
    else 
    {
        return b;
    }
}

int hcf (int a, int b)
{
    int hcf, i;
    int* min;
    min = minimum (&a, &b); // Since we are returning only one integer, then only the value can be used instead of address of a and b.
    for (i=1; i<=*min; i++)
    {
        if (a%i==0 && b%i==0)
        {
            hcf=i;
        }
    }
    return hcf;
}
int main ()
{
    int a, b, gcd, i;
    int* min;
    printf ("Enter the two numbers - ");
    scanf ("%d %d", &a, &b);

    gcd = hcf (a,b);
    printf ("HCF = %d", gcd);
    return 0;
}