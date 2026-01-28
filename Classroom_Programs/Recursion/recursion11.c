#include <stdio.h>
int main()
{
    int a, b, c, d, ways;
    printf("Enter the value of a and b : ");
    scanf("%d %d", &a, &b);
    int maze ();
    ways = maze (a, b);
    printf("%d ", ways);
    return 0;
}

int maze (int a, int b)
{
    int ways;
    int right = 0;
    int down = 0;
    if (a == 1 && b == 1)
    {
        return 1;
    }
    else if (a == 1)
    {
        right += maze (a, b-1);
    }
    else if (b == 1)
    {
        down += maze (a-1, b);
    }
    else 
    {
        down += maze (a-1, b);
        right += maze (a, b-1);
    }
    ways = right + down;
    return ways;
}