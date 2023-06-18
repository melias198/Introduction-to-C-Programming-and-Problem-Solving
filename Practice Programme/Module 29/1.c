#include<stdio.h>

struct student
{
    int roll;
    int age;
    float weight;
};

int main()
{
    struct student s;
    s.age=12;
    s.roll=10;
    s.weight=86.35;
    printf("%d %d %f",s.roll,s.age,s.weight);
    return 0;
}

