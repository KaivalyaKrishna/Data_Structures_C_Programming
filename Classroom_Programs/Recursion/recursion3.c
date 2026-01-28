#include <stdio.h>
int main ()
{
    int n;
    printf ("Enter the value of n : ");
    scanf ("%d", &n);
    void natural ();
    natural(n);
    return 0;
}

void natural (int n)
{
    // int i;
    // for (i=n; i>=1; i--)
    // {
    //     printf ("%d ", i);
    // }

    if (n==0)
    {
        return;
    }
    
    printf ("%d ", n);
    natural (n-1);
    printf ("%d ", n);
    return;
}