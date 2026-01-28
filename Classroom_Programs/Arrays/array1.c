#include<stdio.h>
int main ()
{
    int marks[3];
    printf ("Enter the desired values -");
    scanf ("%d %d %d", &marks [0], &marks [1], &marks [2]);
    printf (" phy = %d \n chem = %d \n maths = %d", marks [0], marks [1], marks [2]);
    return 0;
}