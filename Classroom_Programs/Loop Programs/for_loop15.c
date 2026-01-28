#include <stdio.h>
int main ()
{
    long long i, a, c=0;
    printf ("Enter a number - ");
    scanf ("%lld", &a);
    for (i=0; a>0; i++)
    {
        // if (a!=0)
        // {
        //     c++;
        // }
        // a = a/10;

        c++;
        a = a/10;
    }

    printf ("The number of digits = %d", c);
    return 0;
}