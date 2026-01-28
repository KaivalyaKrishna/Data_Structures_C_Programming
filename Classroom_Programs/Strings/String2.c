#include<stdio.h>
#include<string.h>
int main ()
{
    char a[20], b[20];
    printf ("Enter the string - ");
    gets (a);
    strcpy (b,a);
    printf ("The copied string is - %s", b);
    return 0; 
}
