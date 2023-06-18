#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int f1=0,f2=1;
    int fibterm=f1+f2;
    printf("%d, %d, ",f1,f2);
    for(int i=3;i<n;i++)
    {
        printf("%d, ",fibterm);
        f1=f2;
        f2=fibterm;
        fibterm=f1+f2;
    }
    printf("%d",fibterm);
    return 0;
}

