#include<stdio.h>

void swapping(int* arra,int n)
{
    int k;
    scanf("%d",&k);
    int l,r,temp;
    for(int i=0;i<k;i++)
    {
        scanf("%d %d",&l,&r);
        temp=arra[l];
        arra[l]=arra[r];
        arra[r]=temp;
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    int arra[n];
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&arra[i]);
    }
    swapping(&arra,n);
     for(int i=1;i<=n;i++)
    {
        printf("%d ",arra[i]);
    }
    return 0;
}

