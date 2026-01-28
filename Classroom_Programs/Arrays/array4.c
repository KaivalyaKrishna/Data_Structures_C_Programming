#include<stdio.h>
int main ()
{
    int i, arr[5];
    for (i=0;i<=4;i++)
    {
        printf ("the %d number: ", i);
        scanf ("%d", &arr[i]);
    }

    for (i=0;i<=4;i++)
    {
        printf ("the number is - %d\n", arr[i]);
    }

    return 0;
}