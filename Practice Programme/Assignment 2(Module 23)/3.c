#include<stdio.h>
#include<string.h>
int is_one_present(char number[],int x)
{
   for(int i=0;i<x;i++)
   {
     if(number[i]=='1')
     return 1;
   }
   return 0;
}

int is_seven_present(char number[],int x)
{
   for(int i=0;i<x;i++)
   {
     if(number[i]=='7')
     return 1;
   }
   return 0;
}

int is_nine_present(char number[],int x)
{
   for(int i=0;i<x;i++)
   {
     if(number[i]=='9')
     return 1;
   }
   return 0;
}

int main()
{
    char number[100];
    scanf("%s",number);
    int len=strlen(number);
    int case1= is_one_present(number,len);
    int case2= is_seven_present(number,len);
    int case3= is_nine_present(number,len);
    if(case1 == 1 && case2==1 && case3==1)
    printf("Yes");
    else
    printf("No");
    return 0;
}

