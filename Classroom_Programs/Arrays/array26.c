#include<stdio.h>
int main ()
{
    int n, i, j, k, c=0, x;
    printf ("Enter the total number of elements : ");
    scanf ("%d", &n);

    int a[n];
    for (i=0;i<n;i++)
    {
        printf ("Enter the element number %d : ", i+1);
        scanf ("%d", &a[i]);
    }

    for (i=0; i<n; i++)
    {
        for (j=i+1; j<n; j++)
        if (a[j]==a[i])
        {
            printf ("%d is the duplicate element in the array \n", a[j]);
            break;
        }
    }

    return 0;
}
