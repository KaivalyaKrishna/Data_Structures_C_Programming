#include <stdio.h>
int swap (int a, int b)
{
    int c = a;
    a=b;
    b=c;
    return a;
    return b;
}

int* ref_swap (int* a, int* b)
{
    int c = *a;
    *a = *b;
    *b = c;
    return a;
    return b;
}
int main ()
{
    int a, b;
    int* c;
    printf ("Enter the two numbers - ");
    scanf ("%d %d", &a, &b);
    printf ("Before Swapping, a = %d, b = %d \n", a, b);
    c = ref_swap (&a, &b);
    printf ("After Swapping, a = %d, b = %d \n", a, b);
    return 0;
}