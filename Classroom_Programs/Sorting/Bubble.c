#include<stdio.h>
int main ()
{
    int i, j, m, n;
    printf ("Enter the number of elements of the array - ");
    scanf ("%d", &m);

    int a[m];
    printf ("Enter the element of the array - ");

    for (i=0; i<m; i++)
    {
        scanf ("%d", &a[i]);
    }
    
    printf ("The array is - \n");

    for (i=0; i<m; i++)
    {
        printf ("%d\t", a[i]);
    }
        
    printf ("\n");

    for (i=0; i<(m-1); i++)
    {
        for (j=0; j<(m-i-1); j++)
        {
            if (a[j] > a[j+1])
            {
                n = a[j];
                a[j] = a[j+1];
                a[j+1] = n;
            }
        }
    }
    
    printf ("The sorted array is - \n");

    for (i=0; i<m; i++)
    {
        printf ("%d\t", a[i]);
    }
    return 0;
}