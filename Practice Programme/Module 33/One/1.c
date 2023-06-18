#include<stdio.h>

int main()
{
    int n,sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int a;
        scanf("%d",&a);
        sum+=a;
    }
    printf("Sum --> %d",sum);
    return 0;
}

