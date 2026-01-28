#include <stdio.h>
int main ()
{
    int n, m, p, k=0, j;
    printf ("Enter the size of the array - ");
    scanf ("%d", &n);
    int a[n];
    printf ("Enter the elements of the array - \n");
    for (int i=0; i<n; i++)
    {
        scanf ("%d", &a[i]);
    }

    printf ("The item which you want to add after which index - ");
    scanf ("%d %d", &m, &p);
    
    for (int i = n; i>p; i--)
    {
        a[i] = a[i-1];
    }
    a[p+1] = m;

    printf ("The elements of the array with their indices are - \n");

    for (int i = 0; i<=n; i++)
    {
        printf ("Item - %d, Index - %d \n", a[i], i);
    }

    return 0;
}