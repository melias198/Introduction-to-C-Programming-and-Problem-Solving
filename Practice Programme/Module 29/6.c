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
    struct student s;
    scanf("%d%s%d%f",&s.roll,&s.name,&s.age,&s.weight);
    printf("Student Info\n");
    printf("%d\n%s\n%d\n%f",s.roll,s.name,s.age,s.weight);
    return 0;
}