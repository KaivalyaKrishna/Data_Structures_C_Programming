// string length without using stnlen function
#include <stdio.h>
#include <string.h>
int main ()
{
    char s[] = "Programming is fun";
    int i;
    for (i=0; s[i]!='\0'; ++i);
    printf ("Length of the string is %d\n", i);
    return 0;
}