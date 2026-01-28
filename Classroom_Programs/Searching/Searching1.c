#include <stdio.h>
int main()
{
   int a[10], i, count = 0, c;
   int k;

   printf ("Enter the desired number - ");
   scanf ("%d", &k);

   for (i=0; i<10; i++)
   {
    printf ("Enter the number of array - ");
    scanf ("%d", &a[i]);
   }

   for (i=0; i<10; i++)
   {
    if (k == a[i])
    {
        c = i;
        count++;
    }
   }

   if (count==1)
   {
    printf ("Number is present in the array at %d", a[i], c);
   }
   else if (count>1)
   {
    printf ("Number is present %d times in the array", count);
   }

   else
   {
    printf ("Number is not present in the array", a[10]);
   }

   return 0;
}