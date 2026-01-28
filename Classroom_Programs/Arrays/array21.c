#include<stdio.h>
int main ()
{
    int n, i, j, c;
    printf ("Enter the total number of elements : ");
    scanf ("%d", &n);

    int a[n];
    for (i=0;i<n;i++)
    {
        printf ("Enter the element number %d : ", i+1);
        scanf ("%d", &a[i]);
        
    }

    
    for (i=0, j=n-1;i<j;i++, j--)
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

    for (i=0; i<n; i++)
    {
        printf ("The %d element : %d \n", i+1, a[i]);
    }
    return 0;
}