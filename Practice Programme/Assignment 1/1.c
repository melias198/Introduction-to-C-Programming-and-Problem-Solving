#include<stdio.h>

int main()
{
    int t,ii;
    scanf("%d",&t);
    for(ii=1;ii<=t;ii+=1)
    {
   
     long long int n,a,m,i,sum=0;
     scanf("%lld",&n);
     for(i=1;i<=3;i++)
     {
        scanf("%lld",&a);
        sum+=a;
     }
     m=n-sum;
     printf("%lld\n",m);

    }

    return 0;
}