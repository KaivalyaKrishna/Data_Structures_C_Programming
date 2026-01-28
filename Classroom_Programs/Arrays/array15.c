#include<stdio.h>
int main ()
{
    int m, n, i, c=0;
    printf ("Enter the total number of elements : ");
    scanf ("%d", &n);

    int a[n];
    for (i=0;i<n;i++)
    {
        printf ("Enter the element number %d : ", i+1);
        scanf ("%d", &a[i]);
    }

    printf ("Enter the required number : ");
    scanf ("%d", &m);

    for (i=0;i<n;i++)
    {
        if (a[i]>m)
        {
            c++;
        }
    }
    printf ("The total number of elements greater than %d is : %d", m, c);
    return 0;
}