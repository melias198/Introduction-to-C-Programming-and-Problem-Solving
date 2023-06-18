#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int ii=0;ii<t;ii++)
    {

    int n;
    scanf("%d",&n);
    char s[1000];
    scanf("%s",s);
    int len=strlen(s);
    int count=0;
     for(int i=0;i<len;i++)
    {
        if(s[i]=='1' && s[i+1]=='0')
        {
         count++;
        }
        else if( s[i]=='0' && s[i+1]=='1')
        count++;
    }
    printf("%d\n",count);

    
    }

    return 0;
}

