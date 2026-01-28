#include<stdio.h>
int main ()
{
    int i, j, m, n, p, k;
    printf ("Enter the number of rows of matrix A - ");
    scanf ("%d", &m);
    printf ("Enter the number of columns of matrix A - ");
    scanf ("%d", &n);
    printf ("Enter the number of rows of matrix B - ");
    scanf ("%d", &n);
    printf ("Enter the number of columns of matrix B- ");
    scanf ("%d", &p);

    int a[m][n], b[n][m], c[m][p];

    printf ("Enter the element of the matrix A - \n");

    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            scanf ("%d", &a[i][j]);
        }
    }

    printf ("Enter the element of the matrix B - \n");

    for (i=0; i<n; i++)
    {
        for (j=0; j<p; j++)
        {
            scanf ("%d", &b[i][j]);
        }
    }

    printf ("The matrix A is - \n");

    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            printf ("%d\t", a[i][j]);
        }
        printf ("\n");
    }

    printf ("The matrix B is - \n");

    for (i=0; i<n; i++)
    {
        for (j=0; j<p; j++)
        {
            printf ("%d\t", b[i][j]);
        }
        printf ("\n");
    }

    for (i=0; i<m; i++)
    {
        for (j=0; j<p; j++)
        {
            c[i][j] = 0;
        }
    }

    for (i=0; i<m; i++)
    {
        for (j=0; j<p; j++)
        {
            for (k=0; k<n; k++)
            {
                c[i][j] = c[i][j] + (a[i][k]*b[k][j]);
            }
        }
    }

    printf ("The product of matrices A and B is - \n");

    for (i=0; i<m; i++)
    {
        for (j=0; j<p; j++)
        {
            printf ("%d\t", c[i][j]);
        }
        printf ("\n");
    }

    return 0;
}