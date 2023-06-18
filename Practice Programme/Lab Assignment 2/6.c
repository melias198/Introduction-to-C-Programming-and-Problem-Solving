#include<stdio.h>

 int is_divisibleby_three(int n)
 {
   if(n%3==0)
   return 1;
   else
   return -1;
    
 }

 int is_divisibleby_five(int n)
 {
    
   if(n%5==0)
   return 1;
   else
   return -1;
   
 }

int main()
{
    int n;
    scanf("%d",&n);
    int arra[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arra[i]);
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
       if(is_divisibleby_three(arra[i])==1 ||  is_divisibleby_five(arra[i])==1)
       count++;
    }
    if(count>0)
    printf("%d",count);
    else
    printf("-1");
    return 0;
}

