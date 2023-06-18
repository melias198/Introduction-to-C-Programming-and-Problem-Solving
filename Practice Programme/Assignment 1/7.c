#include<stdio.h>

int main()
{
    int n,i,k;
    scanf("%d",&n);
    int arra[n];
    for(i=1;i<=n;i++)
    {
     scanf("%d",&arra[i]);
    }
    scanf("%d",&k);
    for(i=k+1;i<=n;i++)
    {
       printf("%d ",arra[i]);
    }
    for(i=1;i<=k;i++)
    {
        printf("%d ",arra[i]);
    }

    return 0;
}
