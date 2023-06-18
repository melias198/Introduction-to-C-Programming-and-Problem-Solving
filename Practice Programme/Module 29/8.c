#include<stdio.h>

struct student
{
    double weight; // boro value age likhle byte kom lage
    int roll;
};

int main()
{
    struct student s[10];//structure of array
    for(int i=0;i<10;i++)
    {
        s[i].roll=1+i;
        s[i].weight=10.5*i;
    }
    for(int i=0;i<10;i++)
    {
        printf("%d -- %lf\n",s[i].roll,s[i].weight);
    }
    return 0;
}