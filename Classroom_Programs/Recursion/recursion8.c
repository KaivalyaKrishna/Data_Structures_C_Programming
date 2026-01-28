#include <stdio.h>
int main ()
{
    int n;
    printf("Enter the number of stairs : ");
    scanf("%d", &n);
    int stairs ();
    printf("%d", stairs(n));
    return 0;
}

int stairs (int n)
{
    if (n == 1)
    {
        return 1;
    }
    if (n == 2)
    {
        return 2;
    }
    if (n == 3)
    {
        return 4;
    }
    int ways;
    ways = stairs (n-1) + stairs (n-2) + stairs (n-3);
    return ways;
}