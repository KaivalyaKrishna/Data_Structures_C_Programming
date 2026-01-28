#include<stdio.h>
int main ()
{
    int n, i, sum=0;
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
        sum += a[i];
    }

    printf ("The sum of the elements of the array is - %d", sum);
    return 0;
}