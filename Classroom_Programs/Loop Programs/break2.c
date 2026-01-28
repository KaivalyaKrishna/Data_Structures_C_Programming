#include<stdio.h>
int main ()
{
    int n;
    
    do
    {
        printf ("Enter a number : ");
        scanf ("%d", &n);

        if (n%7==0)
        {
            printf("See you soon !!");
            break;
        }   
        n++;     
    } 
    while (1);
    return 0;
}