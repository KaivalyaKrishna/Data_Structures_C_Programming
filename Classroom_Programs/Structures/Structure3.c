#include<stdio.h>
struct student 
    {
        char name [20]; 
        int roll_no; 
        float marks1, marks2, marks3;
    };

int main ()

{
    struct student data[3];
    int i;
    for (i=0; i<3; i++)
    {
        printf ("Enter the name of the student - ");
        scanf ("%s", data[i].name);

        printf ("Enter the roll number of the student - ");
        scanf ("%d", &data[i].roll_no);

        printf ("Enter the 1st subject marks of the student - ");
        scanf ("%f", &data[i].marks1);

        printf ("Enter the 2nd subject marks of the student - ");
        scanf ("%f", &data[i].marks2);

        printf ("Enter the 3rd subject marks of the student - ");
        scanf ("%f", &data[i].marks3);

    }

    for (i=0; i<3; i++)
    {
        printf ("The name of the student - %s\n", data[i].name);

        printf ("The roll number of the student - %d\n", data[i].roll_no);

        printf ("The 1st subject marks of the student - %f\n", data[i].marks1);

        printf ("The 2nd subject marks of the student -%f\n", data[i].marks2);

        printf ("The 3rd subject marks of the student - %f\n", data[i].marks3);

    }

    return 0;
}