#include <stdio.h>
int main()
{
    int a;
    printf("Enter the value of a : ");
    scanf("%d", &a);
    void pre_in_post ();
    pre_in_post (a);
    return 0;
}

void pre_in_post (int a)
{
    if (a==0)
    {
        return;
    }
    printf ("Pre %d\n", a);
    pre_in_post (a-1);
    printf ("In %d\n", a);
    pre_in_post (a-1);
    printf ("Post %d\n", a);
    return;
}