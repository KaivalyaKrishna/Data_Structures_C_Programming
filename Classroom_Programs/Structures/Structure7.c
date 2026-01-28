#include<stdio.h>
#include<string.h>
struct book
{
    char title [20];
    char author [20];
    float price;
};

int main ()
{
    int a=0, b=2;
    struct book data[3];
    int i;

    
    for (i=0; i<3; i++)
    {
        printf ("Enter the title of the %d book - ", i+1);
        scanf ("%s", data[i].title);

        printf ("Enter the name of the author of the %d book - ", i+1);
        scanf ("%s", data[i].author);

        printf ("Enter the price of the %d book - ", i+1);
        scanf ("%f", &data[i].price);

    }


    for (i=0; i<3; i++)
    {
        if (data[i].price > data[a].price)
        {
            a=i;
        }

        if (data[i].price < data[b].price)
        {
            b=i;
        }

    }

    printf ("The most expensive book is %s written by %s with %f as its price and \nThe lowest priced book is %s written by %s with %f as its price", data[a].title, data[a].author, data[a].price, data[b].title, data[b].author, data[b].price);

    return 0;
}