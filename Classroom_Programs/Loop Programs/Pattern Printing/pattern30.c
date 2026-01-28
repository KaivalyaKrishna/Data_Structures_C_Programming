#include <stdio.h>
int main ()
{
    int i, j, k, l, m, n;
    char a ='A';
    printf ("Enter the value of n - ");
    scanf ("%d", &n);
    for  (m=1; m<=((2*n)+1); m++)
    {
        printf ("%c", a);
        (int)a++;

    }
    printf ("\n");

    int nsp = 1, nst = n;
    for (i=1; i<=n; i++)
    {
        a = 'A';
        for (j=1; j<=nst; j++)
        {
            printf ("%c", a);
            (int)a++;
        }

        for (k=1; k<=nsp; k++)
        {
            printf (" ");
            (int)a++;
        }
        nsp+=2;


        for (l=1; l<=nst; l++)
        {
            printf ("%c", a);
            (int)a++;
        }
        nst--;
        printf ("\n");
    }
    return 0;
}