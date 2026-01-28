#include <stdio.h>
int i;
void tower (int n, char s, char h, char d)
{
    if (n==1)
    {
        printf ("%c -> %c \n", s, d);
        return;
    }
    tower (n-1, s, d, h);
    printf ("%c -> %c \n", s, d);
    tower (n-1, h, s, d);
    return;
}

int main ()
{
    int a;
    printf ("Enter the value of a: ");
    scanf ("%d", &a);
    tower (a, 'A', 'B', 'C');
    return 0;
}