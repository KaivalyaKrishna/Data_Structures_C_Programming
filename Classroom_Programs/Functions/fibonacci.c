#include <stdio.h>

int fibonacci (int a)
{
    int fibo = 0, x = 1, y = 1, i;
    printf ("The Fibonacci series is = \n1 \n1 \n");
    for (i=1; i<=(a-2); i++)
    {
        fibo = x + y;
        printf ("%d\n", fibo);
        x=y;
        y=fibo;
    }
    return 0;
}
int main ()
{
    int a, fibo, i;
    printf ("Enter the number - ");
    scanf ("%d", &a);

    fibo = fibonacci (a);
    return 0;
}