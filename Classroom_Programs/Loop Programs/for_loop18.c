#include <stdio.h>
#include <math.h>
int main ()
{
    int i, m, n, p = 1; // int p
    printf ("Enter the value of m (base) and n (power) - ");
    scanf ("%d %d", &m, &n);
    
    // p = pow (m, n);
    // printf ("The value is = %d", p);

    for (i=1; i<=n; i++)
    {
        p = m*p;
    }

    printf ("The value is = %d", p);
    return 0;
}