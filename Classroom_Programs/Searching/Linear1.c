#include<stdio.h>
int main ()
{
    int i, j, m, n=0, p, k;
    printf ("Enter the number of elements of the array - ");
    scanf ("%d", &m);

    printf ("Enter the desired number - ");
    scanf ("%d", &k);

    int a[m];
    printf ("Enter the element of the array - ");

    for (i=0; i<m; i++)
    {
        scanf ("%d", &a[i]);
    }
    

    printf ("The array is - \n");

    for (i=0; i<m; i++)
    {
        printf ("%d\t", a[i]);
    }
        
    printf ("\n");

    for (i=0; i<m; i++)
    {
        if (a[i] == k)
        {
            p=i;
            n++;
        }
    }
    {
        if (n==1)
        {
            printf ("The required number is present once in the array at %dth position.", p+1);
        }

        else if (n>1)
        {
            printf ("The required number is present %d times in the array.", n);
        }

        else 
        {
            printf ("The required number is not present in the array.");
        }
    }
    return 0;
}