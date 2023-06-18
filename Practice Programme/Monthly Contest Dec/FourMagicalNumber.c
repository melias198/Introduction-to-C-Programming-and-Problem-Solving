#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() { 
    int t;
    scanf("%d",&t);
    for(int ii=0;ii<t;ii++)
    {
        long long int n;
        scanf("%lld",&n);

        long long int arra[n];
        for(int i=0;i<n;i++)
            {
            scanf("%lld",&arra[i]);
            }
        int max=arra[0];
        for(int i=0;i<n;i++)
            {
            if(arra[i]>max)
                max=arra[i];
            }
        int min=arra[0];
        for(int i=0;i<n;i++)
            {
            if(arra[i]<min)
                min=arra[i];
            }
        long long int maxp=max*max;
        long long int minp=min*max;
        long long int maxs=max+max;
        long long int mins=min+min;
        if(maxp>minp)
        printf("%lld %lld %lld %lld ",maxp,minp,maxs,mins);
        else
        printf("%lld %lld %lld %lld ",minp,maxp,maxs,mins);
        printf("\n");
  }
    return 0;
}