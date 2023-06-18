#include<stdio.h>

int primeNumber(int a)
{
    if(a==1)
    {
        return 0;
    }
    else if(a==2)
    {
        return 1;
    }
    else 
    {
        for(int i=2;i<a;i++)
        {
            if(a%i==0)
          {
            return 0;
          }
        }
    }
    return 1;
}

int main()
{
    int a;
    scanf("%d",&a);
    int ans=primeNumber(a);
    if(ans==1)
    {
        printf("%d is a prime number.",a);
    }
    else
    {
        printf("%d is a composite number.",a);
    }

    return 0;
}

