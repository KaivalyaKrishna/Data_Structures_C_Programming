#include <stdio.h>
int main()
{
    int a =1, b =1, n;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    int fibo ();
    printf("%d", fibo(n));
    return 0;
}
int fibo (int n)
{
   if (n==1 || n==2)
   {
        return 1;
   }

   int f, ans1 = fibo (n-1), ans2 = fibo (n-2);
   f = ans1 + ans2;
   ans1 = ans2;
   ans2 = f;
   return f;
}