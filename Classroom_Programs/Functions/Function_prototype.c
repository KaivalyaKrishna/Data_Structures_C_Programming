#include<stdio.h>
#include<string.h>
float tri_area(); //function prototype
int main ()
{
    char ch;
    int flag;
    float area;
    flag = 0;

    while (flag==0)
    {
        area = tri_area();
        printf ("\n Area of Triangle - %f", area);
        printf ("\n Want to calculate again Y/N - ");
        getchar();
        ch = getchar();

        if (ch == 'N' || ch == 'n')
        {
            flag = 1;
        }
    }

    return 0;
}

float tri_area()
    {
        float base, height, area;
        printf ("\n Enter the base and height - ");
        scanf ("%f %f", &base, &height);
        area = (0.5)*base*height;
        return (area);
    }