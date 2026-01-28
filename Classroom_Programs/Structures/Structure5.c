#include<stdio.h>
#include<string.h>
struct circle
{
    float radius;
};

int main ()
{
    float a, p;
    struct circle data[2];
    int i;

    
    for (i=0; i<2; i++)
    {
        printf ("Enter the radius of the %d circle - ", i+1);
        scanf ("%f", &data[i].radius);
    }


    for (i=0; i<2; i++)
    {
        a = 3.14*data[i].radius*data[i].radius;
        p = 2*3.14*data[i].radius;

        printf ("Area of the %d circle - %f\n", i+1, a);
        printf ("Perimeter of the %d circle - %f\n", i+1, p);
        
    }

    return 0;
}