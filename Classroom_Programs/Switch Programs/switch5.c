#include <stdio.h>

int main()
{
    float P, Q, A, S, M, D, R;
    char a, s, m ,d, r;
    char chare;
    printf ("Enter the operation - ");
    scanf ("%c", &chare);


    switch(chare)
    {
        case 'a' :
        printf ("Enter the numbers - ");
        scanf("%f, %f", &P, &Q);
        A=P+Q;
        printf("Sum = %f", A);
        break;

        case 's' :
        printf ("Enter the numbers - ");
        scanf("%f, %f", &P, &Q);
        S=P-Q;
        printf("Difference = %f", S);
        break;

        case 'm' :
        printf ("Enter the numbers - ");
        scanf("%f, %f", &P, &Q);
        M=P*Q;
        printf("Product = %f", M);
        break;


        case 'd' :
        printf ("Enter the numbers - ");
        scanf("%f, %f", &P, &Q);
        D=P/Q;
        printf("Division = %f", D);
        break;

        case 'r' :
        printf ("Enter the numbers - ");
        scanf("%f, %f", &P, &Q);
        R=(int)P%(int)Q;
        printf("Remainder = %f", R);
        break;
    }

    return 0;
}