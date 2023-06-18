#include<stdio.h>

int main()
{
    long long int n,div=0,sum=0;
    scanf("%lld",&n);
    div=n/3;
    for(int i=1;i<=3;i++)
    {
        sum+=div;
    }
    if(sum==n)
    {
        printf("%d",div);
    }
    else
    {
        printf("-1");
    }

    return 0;
}

