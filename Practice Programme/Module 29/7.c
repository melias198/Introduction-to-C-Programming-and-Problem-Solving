#include<stdio.h>

struct student
{
    int roll;
    char name[20];
    int age;
    float weight;
};

int main()
{
    struct student s={.age=10,.roll=25,.weight=85.5,.name="Elias"};//designated
    printf("%d\n%s\n%d\n%f",s.roll,s.name,s.age,s.weight);
    return 0;
}