#include <stdio.h>
int main()
{
    int a, b, c, d, ways;
    printf("Enter the value of a and b : ");
    scanf("%d %d", &a, &b);
    int maze ();
    ways = maze (1, 1, a, b);
    printf("%d ", ways);
    return 0;
}

int maze (int cr, int cc, int er, int ec)
{
    int ways;
    int right = 0;
    int down = 0;
    if (er == cr && ec == cc)
    {
        return 1;
    }
    else if (er == cr)
    {
        right = right + maze (cr, cc+1, er, ec);
    }
    else if (ec == cc)
    {
        down = down + maze (cr+1, cc, er, ec);
    }
    else 
    {
        right = right + maze (cr, cc+1, er, ec);
        down = down + maze (cr+1, cc, er, ec);
    }

    ways = right + down;
    return ways;
}