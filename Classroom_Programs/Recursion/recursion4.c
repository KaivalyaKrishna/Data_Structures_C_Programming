#include <stdio.h>
int main ()
{
    int n, a;
    int s = 0;
    printf ("Enter the value of n : ");
    scanf ("%d", &n);
    void sum ();
    sum (n, s);
    return 0;
}

void sum (int n, int s)
{

    if (n==0)
    {
        printf ("%d", s);
        return;
    }
    s = s + n;
    sum (n-1, s);
    return;
}