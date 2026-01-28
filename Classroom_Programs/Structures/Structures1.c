#include<stdio.h>
int main ()
{
    struct student 
    {
        char name [10]; 
        int roll_no; 
        int age; 
        float CGPA;
    };

    //struct student s1 = {"RAM", 1021, 18, 7.8};
    //printf ("The initial value are - \n");
    //printf ("Name - %s\n", s1.name);
    //printf ("Roll Number - %d\n", s1.roll_no);
    //printf ("Age - %d\n", s1.age);
    //printf ("CGPA - %f\n", s1.CGPA);

    struct student s1;
    gets(s1.name);
    fflush (stdin);
    scanf ("%d %d", &s1.age, &s1.roll_no);
    scanf ("%f", &s1.CGPA);


    return 0;
}