#include<stdio.h>
int main ()
{
    int i, marks[10];
    for (i=0;i<10;i++)
    {
        printf ("Enter the marks of %d student : ", i+1);
        scanf ("%d", &marks[i]);
    }

    for (i=0;i<10;i++)
    {
        if (marks[i]<35)
        {
            printf ("The roll number is - %d\n", i);
        }
    }

    return 0;
}