#include <stdio.h>
int main ()
{
    long long i, a, n, sum=0;
    printf ("Enter a number - ");
    scanf ("%lld", &a);
    for (i=0; a>0; i++)
    {
        n = a%10;
        sum = sum+n;
        a = a/10; 
        
    }

    printf ("The sum of digits = %d", sum);
    return 0;
}