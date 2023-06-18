#include<stdio.h>
int summation(int a,int b)
{
    return a+b;
}

int main()
{
    int a,b,ans;
    scanf("%d %d",&a,&b);
    ans=summation(a,b);
    printf("%d",ans);

    return 0;
}

