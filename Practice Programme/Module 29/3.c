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
    struct student s={10,"Elias",25,85.5};
    printf("%d\n%s\n%d\n%f",s.roll,s.name,s.age,s.weight);
    return 0;
}