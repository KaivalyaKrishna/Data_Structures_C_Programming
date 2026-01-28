#include<stdio.h>
int main ()
{
    int n,  sum=0, i=0;
    printf("Enter the number : ");
    scanf ("%d",&n);
    
    do 
    {
        sum = sum+i;
        i++;
    }
    while (i<=n);
    printf ("%d \n", sum);

    for (i=n; i>=0; i--)
    {
        printf ("%d \n", i);
    }
    
    return 0;
}