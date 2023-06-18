#include<stdio.h>
int largest_number(int a,int b,int c)
{
    if(a>b && a>c)
    {
        return a;
    }
    else if(b>a && b>c)
    {
        return b;
    }
    else
    {
        return c;
    }
}

int main()
{
    int a,b,c,ans;
    scanf("%d %d %d",&a,&b,&c);
    ans = largest_number(a,b,c);
    printf("%d is Largest Number.",ans);

    return 0;
}

