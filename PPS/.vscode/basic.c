#include<stdio.h>
int main ()
{
    int a;
    printf ("Enter your favourite number - ");
    scanf ("%f", &a);

    if (a>0)
    {
        printf ("Papa is not good at maths !!");
    }

    else if (a<0)
    {
        printf ("Papa is not good at maths !! He is also not good at physics because it also contains maths !!");
    }

    else 
    {
        printf ("Though I have given you reasons still you believe that he is good in maths and physics !!");
    }
    return 0;
}