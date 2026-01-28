#include <stdio.h>
int main ()
{
    int i, j, n;
    char ch = 'A', k;
    printf ("Enter the value of n - ");
    scanf ("%d", &n);
    for (i=1; i<=n; i++)
    {
        for (j=1; j<=(n-i); j++)
        {
            printf (" ");
        }

        // for (k=65; k <= (int) ch; k++) [here, k is integer]
        for (k = 'A'; k<=ch; k++) // both 'for-loops' are same [here, k is character]
        {
            printf ("%c", k); //  only change -> (char) k
        }
        ch = (int) ch + 2;
        printf ("\n");
    }
    return 0;
}