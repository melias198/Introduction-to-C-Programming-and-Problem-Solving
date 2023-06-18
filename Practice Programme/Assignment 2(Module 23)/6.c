#include<stdio.h>
int factorial_function(int a)
{
    int fact=1;
    for(int i=1;i<=a;i++)
    {
        fact*=i;
    }
    return fact;
}
float factorial_ratio(float a,float b)
{
    float ratio=a/b;
    printf("%f",ratio);
}

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int fact1=factorial_function(a);
    int fact2=factorial_function(b);
    factorial_ratio(fact1,fact2);
    return 0;
}

