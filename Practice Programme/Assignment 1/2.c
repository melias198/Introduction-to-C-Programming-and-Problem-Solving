#include<stdio.h>

int main()
{
    int n,k,i,run=0;
    scanf("%d",&n);
    int arra[n];
    scanf("%d",&k);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arra[i]);
        if(arra[i]<k)
        {
            run++;
        }
    }
    printf("%d",run);

    return 0;
}