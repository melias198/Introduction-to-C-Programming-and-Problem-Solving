#include<stdio.h>
int even_odd(int a)
{
    if(a%2==0)
    {
        return 0;
    }
    return 1;
}

int main()
{
    int a;
    scanf("%d",&a);
    int ans=even_odd(a);
    if(ans==0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
    return 0;
}

