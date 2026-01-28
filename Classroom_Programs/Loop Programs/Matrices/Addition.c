#include<stdio.h>
int main ()
{
    int i, j, m, n, o, p, q, r;
    printf ("Enter the number of rows of matrices - ");
    scanf ("%d", &m);
    printf ("Enter the number of columns of matrices - ");
    scanf ("%d", &n);

    int a[m][n], b[m][n];

    printf ("Enter the element of the matrix A - \n");

    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            scanf ("%d", &a[i][j]);
        }
    }

    printf ("Enter the element of the matrix B - \n");

    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            scanf ("%d", &b[i][j]);
        }
    }

    printf ("The matrix A is - \n");

    for (i=0; i<m; i++)
    {
        printf ("[\t");
        for (j=0; j<n; j++)
        {
            printf ("%d\t", a[i][j]);
        }
        printf ("]\n");
    }

    printf ("The matrix B is - \n");

    for (i=0; i<m; i++)
    {
        printf ("[\t");
        for (j=0; j<n; j++)
        {
            printf ("%d\t", b[i][j]);
        }
        printf ("]\n");
    }


int c[m][n];

    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

printf ("The sum of matrices is - \n");
    for (i=0; i<m; i++)
    {
        printf ("[\t");
        for (j=0; j<n; j++)
        {
            printf ("%d\t ", c[i][j]);
        }
        printf ("]\n");
    }
    

    return 0;
}