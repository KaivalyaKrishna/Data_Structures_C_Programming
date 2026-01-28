#include <stdio.h>
int main ()
{
    int n;
    printf ("Enter the value of n : ");
    scanf ("%d", &n);
    void natural ();
    natural(1, n);
    return 0;
}

void natural (int m, int n)
{
    if (m>n)
    {
        return;
    }
    
    printf ("%d ", m);
    natural (m+1, n);
    return;
}