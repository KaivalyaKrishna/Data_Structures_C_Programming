#include <stdio.h>

int main ()
{
    int a, b, c;
    printf ("Enter the two numbers - ");
    scanf ("%d %d", &a, &b);
    int sum (); // This is called function prototype.
    c = sum (a, b); // This will help us to place another function (bottom or top) wherever we required.
    printf ("Sum = %d", c);
    return 0;
}

int sum (int a, int b)
{
    int c = a + b;
    return c;
}