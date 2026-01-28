#include <stdio.h>
int sum (int a, int b)
{
    int c = a + b;
    return c;
}
int main ()
{
    int a, b, c;
    printf ("Enter the two numbers - ");
    scanf ("%d %d", &a, &b);
    c = sum (a, b);
    printf ("Sum = %d", c);
    return 0;
}