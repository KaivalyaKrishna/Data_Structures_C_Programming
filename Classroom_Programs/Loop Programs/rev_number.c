#include <stdio.h>
int main ()
{
    int i, a, n, rev=0;
    printf ("Enter a number - ");
    scanf ("%d", &a);
    for (i=0; a>0; i++)
    {
        n = a%10;
        rev = rev*10+n;
        a = a/10;
    }

    printf ("The reverse of the number = %d", rev);
    return 0;
}