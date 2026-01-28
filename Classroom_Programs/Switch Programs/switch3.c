#include <stdio.h>

int main()
{
    int n,a ,b,x,y;
    printf ("Enter the values of n, a, b, x - ");
    scanf("%d %d %d %d", &n, &a, &b, &x);

    switch(n)
    {
        case 1:
             y=a*x % b; 
            printf("The value of y = %d", y);
            break;

        case 2:
             y=a*x*x+b*b;
            printf("The value of y = %d", y);
            break;\

        case 3:
             y=a-b*x;
            printf("The value of y = %d", y);
            break;

         case 4:
            y=a + x/b;
            printf("The value of y = %d", y);
            break;


        default:
            printf("The given number is not real");
            break;

    }
    return 0;
    
}