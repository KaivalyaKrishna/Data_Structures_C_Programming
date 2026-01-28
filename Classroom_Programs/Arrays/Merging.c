#include <stdio.h>
int main ()
{
    int n, m, i, j, k;
    printf ("Enter the size of first array - ");
    scanf ("%d", &m);
    printf ("Enter the size of second array - ");
    scanf ("%d", &n);
    int a[m], b[n], c[m+n];
    printf ("Enter the elements of first array - \n");
    for (int i=0; i<m; i++)
    {
        scanf ("%d", &a[i]);
    }

    printf ("Enter the elements of second array - \n");
    for (int i=0; i<n; i++)
    {
        scanf ("%d", &b[i]);
    }

    printf ("The elements of first array are - \n");

    for (int i = 0; i<m; i++)
    {
        printf ("Item - %d\n", a[i]);
    }

    printf ("The elements of second array are - \n");

    for (int i = 0; i<n; i++)
    {
        printf ("Item - %d\n", b[i]);
    }

    
    i=0,j=0,k=0;
    while(i<m && j<n)
    
    // for (i=0, j=0, k=0; i<m, j<n, k<m+n; k++)
    {
        if (a[i]<=b[j])
        {
            c[k] = a[i];
            i++;
            k++;
        }

        else if (a[i]>=b[j])
        {
            c[k] = b[j];
            j++;
            k++;
        }

        // else 
        // {
        //     c[k] = a[i];
        //     i++;
        //     j++;
        // }
    }

    while (i<m)
    {
        c[k] = a[i];
        k++;
        i++;
    }

    while (j<n)
    {
        c[k] = b[j];
        k++;
        j++;
    }


    printf ("The elements of merged array are - \n");

    for (int i = 0; i<(m+n); i++)
    {
        printf ("Item - %d\n", c[i]);
    }
    return 0;
}