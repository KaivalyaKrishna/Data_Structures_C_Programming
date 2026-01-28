// error
#include <stdio.h>
#include <math.h>
int main ()
{
    int i, a, b, arm = 0;
    for (i=1; i<=500; i++)
    {
        for (a=i; a = a/10;)
        {
            if (a==0)
            {
                break;
            }

            else 
            {
                b = i%10;
                arm = arm + pow(b, 3);
            }
        }
    
        if (arm == i)
        {
            printf ("%d is a armstrong number", i);
        }
    }

    return 0;
}