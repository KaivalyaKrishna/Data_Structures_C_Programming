#include<stdio.h>
int main ()
{
    int n, i, produt=1;
    printf ("Enter the total number of elements : ");
    scanf ("%d", &n);

    int a[n];
    for (i=0;i<n;i++)
    {
        printf ("Enter the element number %d : ", i+1);
        scanf ("%d", &a[i]);
    }

    for (i=0;i<n;i++)
    {
        produt *= a[i];
    }

    printf ("The produt of the elements of the array is - %d", produt);
    return 0;
}