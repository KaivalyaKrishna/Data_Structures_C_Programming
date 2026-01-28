#include<stdio.h>
int main ()
{
    int m, n, i, j, c=0;
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
        for (j=0;j<n;j++)
       {
            if (a[i] == m - a[j])
            {
                c++;
            }
        }

    // for (j=i+1;j<n;j++)
    //    {
    //         if (a[i] == m - a[j])
    //         {
    //             c++;
    //         }
    //     }
    }

    c = c/2;
    printf ("The total number of pairs are : %d", c);
    return 0;
}