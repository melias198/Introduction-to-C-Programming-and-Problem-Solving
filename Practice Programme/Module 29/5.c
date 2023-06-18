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
    struct student s1={10,"Elias",25,85.5};
    struct student s2={15,"Sahid",26,55.5};
    printf("student 1 info\n");
    printf("%d\n%s\n%d\n%f",s1.roll,s1.name,s1.age,s1.weight);
    printf("student 2 info\n");
    printf("%d\n%s\n%d\n%f",s2.roll,s2.name,s2.age,s2.weight);
    return 0;
}