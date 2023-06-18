#include<stdio.h>

int sum_of_array(int ara[],int n)
{
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        if((i%2==0 && ara[i]%2==0) || (i%2==1 && ara[i]%2==1))
        {
            sum+=i+ara[i];
        }
    }
   return sum;
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
    printf("%d",sum_of_array(arra,n));
    return 0;
}

