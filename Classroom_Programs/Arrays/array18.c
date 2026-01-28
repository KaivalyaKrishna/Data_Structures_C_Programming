#include<stdio.h>
int main ()
{
    int m, n, i, j, k, c=0;
    printf ("Enter the total number of elements : ");
    scanf ("%d", &n);

    int a[n];
    for (i=0;i<n;i++)
    {
        printf ("Enter the element number %d : ", i+1);
        scanf ("%d", &a[i]);
    }

    printf ("Enter the required sum : ");
    scanf ("%d", &m);

    for (i=0;i<n;i++)
    {
    for (k=i+1; k<n; k++)
    {
    for (j=k+1;j<n;j++)
       {
            if (a[i] == m - a[j] - a[k])
            {
                c++;
            }
        }
    }
}

    printf ("The total number of pairs are : %d", c);
    return 0;
}