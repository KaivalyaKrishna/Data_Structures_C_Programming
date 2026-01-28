#include<stdio.h>
int main ()
{
    int a, i;
    printf ("Enter your favourite number - ");
    scanf ("%d", &a);

    for (i=0; i<a; i++)
    {
        printf ("Papa is not good at maths !! He is also not good at physics because it also contains maths !!\n");
    }
    return 0;
}