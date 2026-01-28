#include <stdio.h>
int main ()
{
    int a = 0, b = 1, n, i, j;
    printf ("Emter the value of n - ");
    scanf ("%d", &n);
    for (i=1; i<=n; i++)
    {
        for (j=1; j<=i; j++)
        {
            if ((i%2 != 0 && j%2 != 0) || (i%2 == 0 && j%2 == 0))
            {
                printf ("%d", b);

            }
            else
            {
                printf ("%d", a);
            }
        }

        printf ("\n");
    }
    return 0;
}