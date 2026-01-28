#include<stdio.h>
int main ()
{
    int n,  sum=0, i=0, j;
    printf("Enter the number : ");
    scanf ("%d",&n);
    
    for (i=0, j=n; i<=n, j>=0; i++, j--) 
    {
        sum = sum+i;
        printf("%d \n", j);
    }
    printf ("%d \n", sum);

    return 0;
}