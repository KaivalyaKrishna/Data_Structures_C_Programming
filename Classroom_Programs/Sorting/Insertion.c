#include <stdio.h> 
#include<stdlib.h>
int main()
{
    int n, i,j,t;
    printf ("Enter the number of elements of the array - ");
    scanf("%d", &n);

    int* a = malloc(n * sizeof(int));

    printf ("Enter the element of the array - ");

    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }

    printf ("The array is - \n");

    for(i=0;i<n;i++)
    {
        printf("%d \t",a[i]);
    }

    for(i=0;i<n;i++)
    {
        t=a[i];
        j=i-1;

        while(t<a[j]&&j>=0)
        {
            a[j+1]=a[j];
            j=j-1;
        }

        a[j+1]=t;
    }

    printf ("\n");

    printf ("The sorted array is - \n");
    
    for(i=0;i<n;i++)
    {
        printf("%d \t",a[i]);
    }
    
    return 0;
}