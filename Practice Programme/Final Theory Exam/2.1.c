#include<stdio.h>

int main()
{
    int n,a=0,b=1,c;
    scanf("%d",&n);
    printf("%d, %d, ",a,b);
    c=a+b;
    for(int i=3;i<n;i++)
    {
        printf("%d, ",c);
        a=b;
        b=c;
        c=a+b;
    }
    printf("%d",c);
    return 0;
}

