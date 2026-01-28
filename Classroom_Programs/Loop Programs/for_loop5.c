#include<stdio.h>
int main ()
{
    int n, i=0, j;
    printf("Enter the number : ");
    scanf ("%d",&n);
    for (i=1; i<=10; i++)
    {
        j=n*i;
        printf("%d\n", j);
    }

    return 0;
}