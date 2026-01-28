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
        c=0;
        for (j=i+1; j<n; j++)
        {
            if (a[j]==a[i])
        {
            c++;
        }
        }
        if (c==0)
        {
            printf ("The unique element is %d present at %d \n", a[i], i+1);
            break;
        }
    }

    return 0;
}
