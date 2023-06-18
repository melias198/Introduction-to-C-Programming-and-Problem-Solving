#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%s",s);
    int n;
    scanf("%d",&n);
    int len=strlen(s);
    for(int i=0;i<len;i++)
    {
        if(s[i]>='a' && s[i]<='z')
            {
              int a=s[i];
              int result = a+n;
              if(result>=122)
              {
                int dif=result-122;
                s[i]=96+dif;
              }
              else
              {
                s[i]+=n;
              }
            }
    }
    printf("%s",s);
     
    return 0;
}

