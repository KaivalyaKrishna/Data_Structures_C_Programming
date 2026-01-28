#include <stdio.h>

int main()
{
    int a;
    printf ("Enter the number - ");
    scanf("%d", &a);

    switch(a)
    {
        case 1:
            printf("The given number is positive.");
            break;

        case -2:
            printf("The given number is negative.");
            break;\

        case 3:
            printf("The given number is zero.");
            break;

        default:
            printf("The given number is not real");
            break;

    }
    return 0;
    
}