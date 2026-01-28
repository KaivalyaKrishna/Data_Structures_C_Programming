#include<stdio.h>
#include<string.h>
struct employee
{
    int ID;
    char name [20];
    float salary;
};

int main ()
{
    int a, b;
    struct employee data[3];
    int i;

    
    for (i=0; i<3; i++)
    {
        printf ("Enter the employee ID of the %d employee - ", i+1);
        scanf ("%d", &data[i].ID);

        printf ("Enter the name of the %d employee - ", i+1);
        scanf ("%s", data[i].name);

        printf ("Enter the salary of the %d employee - ", i+1);
        scanf ("%f", &data[i].salary);

    }


    for (i=0; i<3; i++)
    {
        if (data[i].salary > data[i+1].salary)
        {
            if (data[i].salary > data[i+2].salary)
            {
                a = data[i].salary;
                b = i;
            }

            else 
            {
                a = data[i+2].salary;
                b = i+2;
            }
        }

        else 
        {
            if (data[i+1].salary > data[i+2].salary)
            {
                a = data[i+1].salary;
                b = i+1;
            }

            else 
            {
                a = data[i+2].salary;
                b = i+2;
            }
        }

    }

    printf ("The employee with highest salary is %s having employee ID %d and the salary is %f", data[b].name, data[b].ID, data[b].salary);

    return 0;
}