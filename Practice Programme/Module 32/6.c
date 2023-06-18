#include<stdio.h>

int solve(int arra[],int i,int n)
{
    if(i==n)
    return 0;
    int s=solve(arra,i+1,n);
    return s+arra[i];
}

int main()
{
    int n;
    scanf("%d",&n);
    int arra[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arra[i]);
    }
    int s=solve(arra,0,n);
    printf("%d",s);
    return 0;
}

