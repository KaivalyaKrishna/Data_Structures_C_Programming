#include <stdio.h>
int main ()
{
    int i, n, c=0;
    printf ("Enter the value of n - ");
    scanf ("%d", &n);
    if (n==0)
    {
        printf ("%d is neither a prime nor a composite number", n);
    }

    else 
    {
        for (i=1; i<=n; i++)
        {
            if(n%i==0)
            {
                c++;
            }
        }
        if(c==2)
        {
            printf ("%d is a prime number", n);
        }

        else 
        {
            printf ("%d is a composite number", n);
        }
    }
    return 0;
}