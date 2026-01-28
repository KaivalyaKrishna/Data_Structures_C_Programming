#include<stdio.h>
int main ()
{
    int a, b, c;
    printf ("Enter the two numbers - ");
    scanf ("%d %d", &a, &b);
    printf ("Before Swapping, a = %d, b = %d \n", a, b);

    // c=a;
    // a=b;
    // b=c;
    
    a = a+b;
    b = a-b;
    a = a-b;
    
    printf ("After Swapping, a = %d, b = %d \n", a, b);
    return 0;
}