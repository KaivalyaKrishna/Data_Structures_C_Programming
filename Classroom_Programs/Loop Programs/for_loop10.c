#include <stdio.h>
int main ()
{
    int i, n;

    for (i=1; i<=10; i++)
    {
        n = 19*i;
        printf ("19 x %d = %d \n", i, n);
    }

    printf ("\n");
    
    for (i=19; i<=190; i=i+19)
    {
        printf ("%d ", i);
    }
    
    return 0;
}