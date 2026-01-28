#include<stdio.h>
#include<string.h>
int main ()
{
    int l;
    char a[10];
    printf ("Enter the string - ");
    gets (a);
    l = strlen (a);
    printf ("The length of the string is - %d", l);

    return 0;
}
