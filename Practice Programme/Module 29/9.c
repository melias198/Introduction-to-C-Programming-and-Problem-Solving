#include<stdio.h>

struct student
{
    double weight;
    int roll;
    int age;
};

int main()
{
    struct student s={.age=10,.roll=25,.weight=85.5,};//designated
    struct student* sp;//pointer in structure
    sp=&s;
    printf("%d %d %lf",sp->roll,sp->age,sp->weight);
    return 0;
}