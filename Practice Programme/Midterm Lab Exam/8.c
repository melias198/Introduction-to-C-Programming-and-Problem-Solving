#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int ii=0;ii<t;ii++)
    {

    
    char s[20];
    scanf("%s",s);
    int flag=1;
    int len=strlen(s);
    for(int i=0;i<len;i++)
    {
        if(s[i]!=s[len-i-1])
        {
            flag=0;
        }
    }
    if(flag==1)
    {
        if(len>7)
        {
           printf("Case #2: %c%d%c\n",s[0],len-2,s[len-1]);
        }
        else{
          printf("Case #3: %s\n",s);
        }
    }
    else
    {
        printf("Case #1: Not Palindrome\n");
    }
    }

    return 0;
}

