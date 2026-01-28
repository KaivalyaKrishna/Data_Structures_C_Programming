#include<stdio.h>
int main ()
{
    int n, i, k, c=0, x;
    printf ("Enter the total number of elements : ");
    scanf ("%d", &n);

    int a[n];
    for (i=0;i<n;i++)
    {
        printf ("Enter the element number %d : ", i+1);
        scanf ("%d", &a[i]);
    }

    printf ("Enter the desired number 'k' : ");
    scanf ("%d", &k);
    

    for (i=0; i<n; i++)
    {
        if (k==a[i])
        {
            c++;
            x=i+1;
        }
    }

    if (c==1)
    {
        printf ("The desired number is present once in the array at %d", x);
    }

    else if (c>1)
    {
        printf ("The desired number is present %d times in the array", c);
    }

    else
    {
        printf ("The desired number is not present in the array");
    }
    return 0;
}
