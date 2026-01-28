#include <stdio.h>
#include<math.h>

int main()
{
   char c, s,r,t;
   char shape;
   float a, b, d, S, A;
   printf("Enetr shape (c,s.r,t) - ");
   scanf("%c", &shape);


    switch(shape)
    {
        case 'c':
            printf("Enter radius of circle = ");
            scanf("%f", &a);
            A = 3.14*a*a;
            printf("The area of circle = %f", A);
            break;

        case 'r':
            printf("Enter length of rectangle = ");
            scanf("%f", &a);
            printf("Enter breadth of ractangle = ");
            scanf("%f", &b);
            A = a*b;
            printf("The area of rectangle = %f", A);
            break;

        case 's':
            printf("Enter length of square = ");
            scanf("%f", &a);
            A = a*a;
            printf("The area of square = %f", A);
            break;

         case 't':
            printf("Enter length of first side of triangle = ");
            scanf("%f", &a);
            printf("Enter length of second side of triangle = ");
            scanf("%f", &b);
             printf("Enter length of third side of triangle = ");
            scanf("%f", &d);
            S=(a+b+c)/2;
            A=sqrt(S*(S-a)*(S-b)*(S-c));
            printf("The area of rectangle = %f", A);
            break;

        default:
            printf("Not Applicable");
            break;

    }
    return 0;
    
}