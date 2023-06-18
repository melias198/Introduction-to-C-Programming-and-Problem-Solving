#include<stdio.h>

struct student
{
    int roll;
    int age;
    float weight;
};

int main()
{
    struct student s={10,25,85.5};
    printf("%d\n%d\n%f",s.roll,s.age,s.weight);
    return 0;
}

