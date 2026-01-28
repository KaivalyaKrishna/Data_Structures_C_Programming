#include<stdio.h>
int main ()
{
    int n,i;
    printf ("Enter a number : ");
    scanf ("%d", &n);
    
   for (i=0;i<=n;i++)
   {
    if (i==6)
    {
        continue;
    }

    printf ("%d\n", i);
   }
    return 0;
}