#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    char s[105];
    scanf("%s",s);
    int count=1,minus=0;
    for(int i=0;i<n-1;i++)
    {
        if(s[i]==s[i+1])
        {
            count++;
        }
        else
        {
            if(minus<count){
                minus=count;
            }
            count=1;
        }
    }
    if(minus<count)
    {
        minus=count;
    }
    printf("%d\n",minus);
   

    return 0;
}

