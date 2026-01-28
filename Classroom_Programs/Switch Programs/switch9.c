#include<stdio.h>
#include<math.h>
int main ()
{
    int a,a1,a2,a3, n1, n2, n3, b; 
    printf ("Enter number : ");
    scanf ("%d", &a);
    a1 = a%10;
    n1 = a/10;
    a2 = n1%10;
    n2 = n1/10;
    a3 = n2%10;
    n3 = n2/10;
    b=pow(a1,3)+pow(a2,3)+pow(a3,3);
    switch (b==a)
    {
        case 1 : printf ("%d is an armstrong number", a);
        break;
        case 0 : printf ("%d is not an armstrong number", a);
        break;
        default : printf ("not a number");
        break;
    }
    
    return 0;
}