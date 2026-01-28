#include <stdio.h>
int main ()
{
    int n, i, j;
    printf ("Emter the value of n (odd value) - ");
    scanf ("%d", &n);
    for (i=1; i<=n; i++)
    {
        for (j=1; j<=n; j++)
        {
            if (i!=((n/2)+1))
            {
                if (j==((n/2)+1))
                {
                    printf ("*");
                }

                else 
                {
                    printf (" ");
                }
                
            }

            else 
            {
                printf ("*");
            }
        }
        printf ("\n");
    }
    return 0;
}