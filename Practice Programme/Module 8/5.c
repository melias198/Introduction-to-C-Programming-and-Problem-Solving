#include<stdio.h>

int main()
{
    int arra[100],n,i,oc=0,ec=0;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&arra[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arra[i]%2==0)
        ec++;
        else
        oc++;
    }
    printf("Total even number : %d\n",ec);
    printf("Total odd number : %d",oc);

    return 0;
}
