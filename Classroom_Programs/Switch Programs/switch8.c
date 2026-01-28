#include<stdio.h>
int main ()
{
    char ch;
    printf("Enter the character :");
    scanf ("%c", &ch);

    switch (ch >= 'a' && ch <= 'z')
    {
        case 1 : printf ("%c is a lower case letter ", ch);
        break;
        case 0 : printf ("%c is a upper case letter ", ch);
        break;
        default : printf ("%c is not a letter", ch);
    }
    
    return 0;
}