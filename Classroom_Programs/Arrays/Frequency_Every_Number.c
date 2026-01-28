#include <stdio.h>
int main ()
{
    int n, m, k=0, j;
    printf ("Enter the size of the array - ");
    scanf ("%d", &n);
    int a[n], b[n];
    printf ("Enter the elements of the array - \n");
    for (int i=0; i<n; i++)
    {
        scanf ("%d", &a[i]);
    }

    for (int i=0; i<n; i++)
    {
        b[i] = a[i];
    }

    for (int i = 0; i<n; i++)
    {
        k=0;
        for (j=0; j<n; j++)
        {    
            if (b[j] == a[i])
            {
                k++;
                b[j]='#';

            }
        }
        if (k != 0)
        {
            printf ("Frequency of %d is %d \n", a[i], k);
            a[i] = '@';
        }
        
    }
    
    return 0;
}