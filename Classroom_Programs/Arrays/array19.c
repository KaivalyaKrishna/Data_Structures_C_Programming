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

    int  x = a[0], m=a[0];
    for (i=0;i<n;i++)
    {
        int max ();
        m = max (m, a[i]);
    }

    for (i=0;i<n;i++)
    {
        if (a[i]!=m && x<a[i])
    {
        x = a[i];
    }
    }

    printf ("The second maximum element of the array is - %d", x);
    return 0;
}

int max (int x, int y)
{
    int i = x;
    if (x<y)
    {
        i = y;
    }
    return i;
}