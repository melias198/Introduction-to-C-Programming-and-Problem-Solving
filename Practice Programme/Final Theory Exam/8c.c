#include<stdio.h>
struct student
{
    char name[50];
    int roll;
    float marks;
};
void printfunc(struct student p)
{
    printf("Displaying Information:\n");
    printf("Name: %s\n",p.name);
    printf("Roll number: %d\n",p.roll);
    printf("Marks: %.2f",p.marks);
}
int main()
{
    struct student s;
    printf("Enter information:\n");
    printf("Enter name: ");
    fflush(stdin);
    gets(s.name);
    printf("Enter roll number: ");
    scanf("%d",&s.roll);
    printf("Enter marks: ");
    scanf("%f",&s.marks);
    printfunc(s);
    return 0;
}

