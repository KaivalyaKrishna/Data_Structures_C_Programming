#include<stdio.h>
#include<string.h>
struct customer
{
    int acc_no;
    char name[50], name_copy[50];
    int acc_balance;
};

int main ()
{
    struct customer data[200];
    int i;
    for (i=0; i<200; i++)
    {
        printf ("Enter the Account number - ");
        scanf ("%d", &data[i].acc_no);

        printf ("Enter the name of the customer - ");
        scanf ("%s", data[i].name);
        strcpy(data[i].name_copy, data[i].name);

        printf ("Enter the Account balance - ");
        scanf ("%d", &data[i].acc_balance);
    }


    printf ("All the details of the customers having balance less than Rs. 100 are - \n");
    for (i=0; i<200; i++)
    {
        if (data[i].acc_balance<100)
        {
            printf ("The Account number is - %d\n", data[i].acc_no);
            
            printf ("The name of the customer is - %s\n", data[i].name_copy);

            printf ("The Account balance is - %d\n", data[i].acc_balance);
        }
        printf ("\n");
    }    
    return 0;
}