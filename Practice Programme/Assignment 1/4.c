#include<stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    int arra[n];
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arra[i]);
    }
    int max=arra[1];
    for(i=1;i<=n;i++)
    {
        if(arra[i]>max)
        max=arra[i];
    }
    for(i=1;i<=n;i++)
    {
        printf("%d ",max-arra[i]);
    }
    
    return 0;
}