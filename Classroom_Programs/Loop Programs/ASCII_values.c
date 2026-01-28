#include <stdio.h>
int main ()
{
    // int A = 65;
    // char b;
    // b = (char)A;
    // while (A!=91)
    // {
    //     b = (char)A;
    //     printf ("%c = %d \n", b, A);
    //     A++;
    // }

    char ch = 'A';
    int b;
    while ((int)ch!=91)
    {
        b = (int)ch;
        printf ("%c = %d \n", ch, b);
        ch++;
    }

    return 0;
}