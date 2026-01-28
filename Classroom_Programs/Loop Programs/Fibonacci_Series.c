#include <stdio.h>

int main()
{
    int a, i, b=1, c=0, d;
    printf ("Enter a number of terms - ");
    scanf ("%d", &a);
    
    for (i=0; i<=(a-2); i++ )
    {
        d = b+c;
        printf ("%d\n", d);
        b=c;
        c=d;
    }
    return 0;
}