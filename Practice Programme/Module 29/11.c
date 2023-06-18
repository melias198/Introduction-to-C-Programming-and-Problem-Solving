#include<stdio.h>

struct student
{
    int roll;
    char name[20];
    int age;
    float weight;
};

void function(struct student p)//using function
{
 printf("%d\n%s\n%d\n%f",p.roll,p.name,p.age,p.weight);
}

int main()
{
    struct student s={10,"Elias",25,85.5};
    function(s);
    return 0;
}