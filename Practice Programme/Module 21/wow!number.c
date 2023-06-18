#include<stdio.h>
int seven_present(n);
int digit_sum(n);
int last_dgt_prime(n);
int main()
{
    int n;
    scanf("%d",&n);
    if(seven_present(n)==1 && digit_sum(n)>10 && last_dgt_prime(n) ==1)
    {
     printf("Wow! Number.");
    }
    else
    {
        printf("No");
    }

    return 0;
}

int seven_present(n)
{
    while(n>0)
    {
        if(n%10==7)
        {
            return 1;
        }
        n /=10;
    }
    return 0;
 
}
int digit_sum(n)
{
    int sum=0;
    while(n>0)
    {
        sum+=(n%10);
        n /=10;
    }
    return sum;

}
int last_dgt_prime(n)
{
    int ld=n%10;
    if(ld==2 ||ld==3 || ld==5 || ld==7)
    {
        return 1;
    }
    else
    return 0;

}