#include <stdio.h>
int main ()
{
    int a;
    printf ("Enter the value of a: ");
    scanf ("%d", &a);
    void zig_zag ();
    zig_zag (a);
    return 0;
}

void zig_zag (int n)
{
    if (n==0)
    {
        return;
    }
    printf ("%d", n);
    zig_zag (n-1);
    printf ("%d", n);
    zig_zag (n-1);
    printf ("%d", n);
    return;
}