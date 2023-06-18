#include<stdio.h>
 struct student
{
  int roll;
  char name[20];
};
int main()
{
    struct student s={10,"Fahim"};
    printf("%d\n",s.roll);
    printf("%s",s.name);
    return 0;
}

