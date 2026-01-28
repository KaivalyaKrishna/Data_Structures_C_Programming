#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j, t, min;
    printf ("Enter the number of elements of the array - ");
    scanf("%d", &n);

    int *a = malloc(n * sizeof(int));

    printf ("Enter the element of the array - ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf ("The array is - \n");

    for (int i = 0; i < n; i++)
    {
        printf("%d \t", a[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            int t = a[i];
            a[i] = a[min];
            a[min] = t;
        }
    }
    printf ("\n");

    printf ("The sorted array is - \n");

    for (int i = 0; i < n; i++)
    {
        printf("%d \t", a[i]);
    }
    return 0;
}