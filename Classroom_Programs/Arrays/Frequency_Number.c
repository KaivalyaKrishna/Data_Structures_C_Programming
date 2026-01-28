#include <stdio.h>
int main ()
{
    int n, m, k=0;
    printf ("Enter the size of the array - ");
    scanf ("%d", &n);
    int a[n];
    printf ("Enter the elements of the array - \n");
    for (int i=0; i<n; i++)
    {
        scanf ("%d", &a[i]);
    }

    printf ("The item whose frequency you want to find - ");
    scanf ("%d", &m);

    for (int i = 0; i<n; i++)
    {
        if (a[i] == m)
        {
            k++;
        }
    }
    
    if (k>0)
    {
        printf ("The frequency of %d in the array is %d", m, k);
    }
    else 
    {
        printf ("%d is not present in the array", m);
    }
        return 0;
}