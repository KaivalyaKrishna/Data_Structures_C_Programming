#include<stdio.h>
int main ()
{
    int m, n, i, j, c=0;
    printf ("Enter the total number of elements : ");
    scanf ("%d", &n);

    int a[n], b[n];
    for (i=0;i<n;i++)
    {
        printf ("Enter the element number %d : ", i+1);
        scanf ("%d", &a[i]);
        
    }

    
    for (i=0;i<n;i++)
    {
        b[i]=a[n-i-1];
    }

    for (i=0; i<n; i++)
    {
        printf ("The %d element number array a : %d \n", i+1, a[i]);
        printf ("The %d element number array b : %d \n", i+1, b[i]);
    }
    return 0;
}