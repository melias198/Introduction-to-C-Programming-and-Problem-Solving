#include<stdio.h>
#include<math.h>
int main()
{
    char s[20];
    scanf("%s",s);
    int a,b,add=0,mul=0,sum=0;
    scanf("%d %d",&a,&b);
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]=='+')
        {
         add++;
        }
        else if(s[i]=='*')
        {
            mul++;
        }
    }
   for(int i=0;i<add;i++)
   {
     sum+=a+b;
   }
    for(int i=0;i<mul;i++)
   {
     sum+=a*b;
   }
   printf("%d",sum);


    return 0;
}

