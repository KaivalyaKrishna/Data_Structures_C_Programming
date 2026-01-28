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
        if (a[i]==b[i])
        {
            c++;
        }
    }

    if (c==n)
    {
        printf ("a is a palindrome.");
    }

    else 
    {
        printf ("a is not a palindrome.");
    }
    return 0;
}