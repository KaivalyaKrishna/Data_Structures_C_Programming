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

    int  m=a[0];
    for (i=0;i<n;i++)
    {
        int min ();
        m = min (m, a[i]);
    }
    printf ("The minimum element of the array is - %d", m);
    return 0;
}

int min (int x, int y)
{
    int m = x;
    if (x>y)
    {
        m = y;
    }
    return m;
}