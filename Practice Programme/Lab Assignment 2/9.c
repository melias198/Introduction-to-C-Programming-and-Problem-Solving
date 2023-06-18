#include<stdio.h>

void is_prime(int* arra,int n)
{
    int flag=0;
    for(int i=0;i<n;i++)
    {
       int count=0;
       for(int j=2;j<arra[i];j++)
       {
       if(arra[i]%j==0)
       {
        count = 1;
        break;
       }
       }
       if(count == 0)
       {
        flag++;
       }
    }
    printf("Prime numbers: %d\n",flag);
}

void avg_of_even(int *arra,int n)
{
    int sum=0,count=0;
    for(int i=0;i<n;i++)
    {
     if(arra[i]%2==0)
     {
      sum+=arra[i];
      count++;
     }
    }
    float avg=sum/count;
    printf("Average of all positive integers: %0.2f",avg);
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
    is_prime(&arra,n);
    avg_of_even(&arra,n);
    return 0;
}

