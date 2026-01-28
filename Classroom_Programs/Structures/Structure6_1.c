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
    int a=0; // assuming the highest salary is of the first employee which is stored in 'a'.
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
        if (data[i].salary > data[a].salary) 
        // If the assumption is wrong means another is greater than the first one, then 'a' will store the address of the new salary and will help us to print the same.
        {
           a=i;
        }

    }

    printf ("The employee with highest salary is %s having employee ID %d and the salary is %f", data[a].name, data[a].ID, data[a].salary);

    return 0;
}