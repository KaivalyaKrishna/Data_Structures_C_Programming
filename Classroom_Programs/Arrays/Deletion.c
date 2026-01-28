#include <stdio.h>
int main ()
{
    int n, m, k=0, j;
    printf ("Enter the size of the array - ");
    scanf ("%d", &n);
    int a[n];
    printf ("Enter the elements of the array - \n");
    for (int i=0; i<n; i++)
    {
        scanf ("%d", &a[i]);
    }

    printf ("The item which you want to delete - ");
    scanf ("%d", &m);

    for (int i = 0; i<n; i++)
    {
        if (a[i] == m)
        {
            k=i;
        }
    }
    
    for (int i = k; i<n; i++)
    {
        a[i] = a[i+1];
    }

    printf ("The elements of the array with their indices are - \n");

    for (int i = 0; i<n-1; i++)
    {
        printf ("Item - %d, Index - %d \n", a[i], i);
    }

    return 0;
}