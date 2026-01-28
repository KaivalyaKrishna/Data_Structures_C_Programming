#include<stdio.h>
#include<conio.h>
int main ()
{
    int l, b, area;
    printf("Enter Length -");
    scanf("%d", &l);
    printf("Enter Breadth -");
    scanf("%d", &b);
    area = l*b;
    printf("Area = %d", area);
    return 0;
}