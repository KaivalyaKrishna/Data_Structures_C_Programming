#include<stdio.h>
int main ()
{
    int marks;
    printf("Enter the marks : ");
    scanf ("%d", &marks);
    switch (marks>30 && marks<=100)
    {
        case 1 : printf ("pass");
        break;
        case 0 : printf ("fail");
        break;
        default : printf ("Not a valid number !!");
        break;

    }

    
    return 0;
}