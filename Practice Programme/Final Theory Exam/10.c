#include<stdio.h>

int main()
{
   int a=7;
   int b=a;
   printf("%d %d\n",a,b);
   b=++a;
   printf("%d %d",a,b);
   return 0;
}