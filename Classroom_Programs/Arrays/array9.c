#include<stdio.h>
int main ()
{
    int n, i;
    printf ("Enter the total number of elements : ");
    scanf ("%d", &n);

    int a[n];
    for (i=0;i<n;i++)
    {
        printf ("Enter the element number %d : ", i+1);
        scanf ("%d", &a[i]);
    }

    for (i=n-1;i>=0;i--)
    {
        printf ("the element number %d : %d \n", i+1, a[i]);
    }

    return 0;
}