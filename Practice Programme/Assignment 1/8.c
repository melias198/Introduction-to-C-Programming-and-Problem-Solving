#include<stdio.h>

int main()
{
    long long int n,i,sum=0;
    scanf("%lld",&n);
    for(i=1;i<n;i++)
    {
        sum+=i;
    }
    printf("%lld",sum);
    return 0;
}
