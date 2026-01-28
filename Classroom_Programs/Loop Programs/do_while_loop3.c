#include<stdio.h>
int main ()
{
    int n,  sum=0, i=1;
    printf("Enter the number : ");
    scanf ("%d",&n);
    
    do 
    {
        sum = sum+i;
        i++;
    }
    while (i<=n);
    printf ("%d \n", sum);
    return 0;
}