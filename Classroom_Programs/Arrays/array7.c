#include<stdio.h>
int main ()
{
    int i, j, n, marks[4][2];

    for (i=0;i<=3;i++)
    {
        for (j=0;j<=1;i++)
        {
            scanf ("%d", &marks[i][j]);
            
        }
        printf ("\n");
    }
    for (i=0;i<=3;i++)
    {
        for (j=0;j<=1;i++)
        {
            printf("%d", marks[i][j]);
        }  
        printf ("\n");
    }
    
    return 0;
}