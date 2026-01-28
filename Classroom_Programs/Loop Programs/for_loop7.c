#include<stdio.h>
int main ()
{
    int n,i, b;
    printf ("Enter a number : ");
    scanf ("%d", &n);

   for (i=10;i>=1;i--)
   {
    b=n*i;
    printf ("%d\n", b);
   }
    return 0;
}