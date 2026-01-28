#include<stdio.h>
int main ()
{
    int n, i, s_e=0, s_o=0;
    printf ("Enter the total number of elements : ");
    scanf ("%d", &n);

    int a[n];
    for (i=0;i<n;i++)
    {
        printf ("Enter the element number %d : ", i+1);
        scanf ("%d", &a[i]);
        if (i%2==0)
        {
            s_e += a[i];
        }
        else 
        {
            s_o += a[i];
        }
    }

    printf ("The difference is : %d", (s_e-s_o));
    return 0;
}