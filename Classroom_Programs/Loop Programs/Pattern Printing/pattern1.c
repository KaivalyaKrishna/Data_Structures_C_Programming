#include <stdio.h>
int main ()
{
    int r, c, i, j;
    printf ("Emter the number of rows and columns - ");
    scanf ("%d %d", &r, &c);
    for (i=0; i<r; i++) // this loop signifies rowws
    {
        for (j=0; j<c; j++) // this loop signifies columns
        {
            printf ("*");
        }
         printf ("\n");
    }
    return 0;
}