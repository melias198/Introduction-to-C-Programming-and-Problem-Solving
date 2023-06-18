#include<stdio.h>

int main()
{
    int n,k,lastdigit,i;
    scanf("%d%d",&n,&k);

    for(i=1;i<=k;i++)
    {
        lastdigit=n%10;
        if(lastdigit !=0)
        {
           n-=1;
        }
        else{
            n/=10;
        }
    }
    printf("%d",n);

    return 0;
}
