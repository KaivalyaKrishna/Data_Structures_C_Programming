#include <stdio.h>
int i, k=0;
void tower (int n, char s, char h, char d)
{
    if (n==1)
    {
        printf ("%c -> %c \n", s, d);
        k++;
        return;
    }
    tower (n-1, s, d, h);
    printf ("%c -> %c \n", s, d);
    k++;
    tower (n-1, h, s, d);
    return;
}

int main ()
{
    int a;
    printf ("Enter the value of a: ");
    scanf ("%d", &a);
    tower (a, 'A', 'B', 'C');
    printf("Total Number of Steps %d\n", k);
    return 0;
}