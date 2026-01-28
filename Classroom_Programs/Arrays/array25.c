#include<stdio.h>
int main ()
{
    int n, i, k, sum=0, sum_total=0;
    printf ("Enter the total number of elements : ");
    scanf ("%d", &n);

    int a[n];
    for (i=0;i<n;i++)
    {
        printf ("Enter the element number %d : ", i+1);
        scanf ("%d", &a[i]);
    }

    printf ("Enter the last number : ");
    scanf ("%d", &k);
    
    int b[k];
    for (i=0;i<k;i++)
    {
        printf ("Enter the element number %d : ", i+1);
        scanf ("%d", &b[i]);
    }

    for (i=0; i<n; i++)
    {
        sum += a[i];
    }

    for (i=0; i<k; i++)
    {
        sum_total += b[i];
    }

    printf ("The absent number in the array is : %d", (sum_total - sum));
    return 0;
}
