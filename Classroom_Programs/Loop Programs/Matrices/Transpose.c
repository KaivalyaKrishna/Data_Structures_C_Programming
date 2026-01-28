#include<stdio.h>
int main ()
{
    int i,j, m, n;
    printf ("Enter the number of rows - ");
    scanf ("%d", &m);
    printf ("Enter the number of columns - ");
    scanf ("%d", &n);

    int a[m][n], b[n][m];

    printf ("Enter the element of the matrix - \n");

    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            scanf ("%d", &a[i][j]);
        }
    }

    printf ("The matrix is - \n");

    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            printf ("%d\t", a[i][j]);
        }
        printf ("\n");
    }

    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            b[i][j] = a[j][i];
        }
    }

    printf ("The transpose of the matrix is - \n");

    for (i=0; i<n; i++)
    {
        for (j=0; j<m; j++)
        {
            printf ("%d\t", b[i][j]);
        }

        printf ("\n");
    }
    return 0;
}