#include<stdio.h>
#include<string.h>

struct student
{
    int roll;
    char name[20];
    int age;
    float weight;
};

int main()
{
    struct student s;
    s.roll=10;
    strcpy(s.name,"Elias");
    s.age=12;
    s.weight=86.35;
    printf("%d\n%s\n%d\n%f",s.roll,s.name,s.age,s.weight);
    return 0;
}
