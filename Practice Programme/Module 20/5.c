#include<stdio.h>

int gcd_lcm(int a,int b)
{
    for(int i=a;i>=1;i--)
    {
        if(a%i==0 && b%i==0)
        {
            return i;
        }
    }
}

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int gcd=gcd_lcm(a,b);
    printf("The gcd of %d and %d is %d\n",a,b,gcd);
    printf("The lcm of %d and %d is %d",a,b,a*b/gcd);
    return 0;
}

