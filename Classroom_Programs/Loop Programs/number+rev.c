#include <stdio.h>
int main ()
{
    int i, a, b, c, n, rev=0;
    printf ("Enter a number - ");
    scanf ("%d", &a);
    b=a;
    for (i=0; b>0; i++)
    {
        n = b%10;
        rev = rev*10+n;
        b = b/10; 
    }

    c = a+rev;
    printf ("The sum = %d", c);
    return 0;
}