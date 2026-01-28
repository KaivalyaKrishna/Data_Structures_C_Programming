#include<stdio.h>
int main ()
{
    int n, i, j, p, q, k;
    printf ("Enter the total number of elements : ");
    scanf ("%d", &n);

    int a[n];
    for (i=0;i<n;i++)
    {
        printf ("Enter the element number %d : ", i+1);
        scanf ("%d", &a[i]);
    }

    // printf ("Enter the starting index : ");
    // scanf ("%d", &p);
    // printf ("Enter the ending index : ");
    // scanf ("%d", &q);
    int rev ();
    rev (a, 0, n-1);

    printf ("Enter the value of k : ");
    scanf ("%d", &k);
    if (k>n)
    {
        k = k%n;
    }

    int rev ();
    rev (a, 0, k-1);
    
    int rev ();
    rev (a, k, n-1);

    for (i=0; i<n; i++)
    {
        printf ("The %d element : %d \n", i+1, a[i]);
    }
    return 0;
}
int rev (int a[], int x, int y)
{
    int i,j, c;
    for (i=x, j=y;i<j;i++, j--)
    {
        if (i<j)
        {   
            c=a[j];
            a[j]=a[i];
            a[i]=c;
        }
        else 
        {
            break;
        }
        
    }
    return c;
}
