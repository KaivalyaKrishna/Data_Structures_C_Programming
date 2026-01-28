#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the value of a and b : ");
    scanf("%d %d", &a, &b);
    int power();
    c = power(a, b);
    printf("%d ", c);
    return 0;
}

int power(int a, int b)
{
    int p;
    if (a == 0)
    {
        printf("Not defined");
        return 0;
    }

    else if (b == 0)
    {
        return 1;
    }

    else
    {
        p = a * power(a, b - 1);
        return p;
    }
}