#include<stdio.h>
int main ()
{
    int i, arr[5];
    for (i=0;i<=4;i++)
    {
        printf ("the %d number: ", i);
        scanf ("%d", &arr[i]);
    }

    for (i=4;i>=0;i--)
    {
        printf ("the %d number is - %d\n", i, arr[i]);
    }

    return 0;
}