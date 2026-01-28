#include<stdio.h>
int main ()
{
    int price[3];
    printf ("Enter the desired values -");
    scanf ("%d %d %d", &price [0], &price [1], &price [2]);
    price [0] = price [0] + ((18*price [0])/100);
    price [1] = price [1] + ((18*price [1])/100);
    price [2] = price [2] + ((18*price [2])/100);
    printf (" Item 1 = %d \n Item 2 = %d \n Item 3 = %d", price [0], price [1], price [2]);
    return 0;
}
