#include <stdio.h>
int main ()
{
    int n;
    printf ("Enter the size of the array - ");
    scanf ("%d", &n);
    int a[n];
    printf ("Enter the elemts of the array - \n");
    for (int i=0; i<n; i++)
    {
        scanf ("%d", &a[i]);
    }

    printf ("The elements of the array with their indices are - \n");

    for (int i = 0; i<n; i++)
    {
        printf ("Item - %d, Index - %d \n", a[i], i);
    }
    return 0;
}