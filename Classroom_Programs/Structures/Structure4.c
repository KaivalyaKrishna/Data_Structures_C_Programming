#include<stdio.h>
#include<string.h>
struct time
{
    int hours, minutes, seconds;
};

int main ()
{
    int sum_h=0, sum_m=0, sum_s=0, n1, n2;
    struct time data[2];
    int i;

    
    for (i=0; i<2; i++)
    {
        printf ("Enter the hours - ");
        scanf ("%d", &data[i].hours);

        printf ("Enter the minutes - ");
        scanf ("%d", &data[i].minutes);

        printf ("Enter the seconds - ");
        scanf ("%d", &data[i].seconds);
    }


    for (i=0; i<2; i++)
    {
        sum_h = sum_h + data[i].hours;
        sum_m = sum_m + data[i].minutes;
        sum_s = sum_s + data[i].seconds;
        
    }

    n1 = sum_s / 60;
    sum_m = sum_m + n1; 
    sum_s = sum_s % 60;

    n2 = sum_m / 60;
    sum_h = sum_h + n2;
    sum_m = sum_m % 60;

    printf ("The sum is %d hours, %d minutes, %d seconds", sum_h, sum_m, sum_s);
    return 0;
}