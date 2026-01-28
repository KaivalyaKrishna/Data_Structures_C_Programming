#include<stdio.h>
int main ()
{
    int i, j, n;

    printf ("Enter the size of the string - ");
    scanf ("%d", &n);

    char a[n];

    printf ("Enter the string - ");
    scanf ("%s", a[n]);

    // for (i=0; i<n; i++)
    // {
    //     scanf ("%s", a[i]);
    // }

    printf ("Number of element you want to print - ");
    scanf ("%d", &j);

    printf ("%c", a[j]);

    return 0;
}