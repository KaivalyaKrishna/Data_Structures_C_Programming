#include <stdio.h>
int main ()
{
    int n, s;
    printf ("Enter the value of n : ");
    scanf ("%d", &n);
    int sum ();
    s=sum (n);
    printf ("%d ", s);
    return 0;
}

int sum (int n)
{
    int s;
    if (n==0)
    {
        return 0;
    }

    s = n + sum (n-1);
    return s;
}