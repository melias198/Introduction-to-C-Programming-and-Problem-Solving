#include<stdio.h>

void sum_of_four(int sum)
{
    int a,b,c,d;
    a=(sum-12)/4;
    b=a+2;
    c=a+4;
    d=a+6;
    printf("%d %d %d %d\n",a,b,c,d);
}
void solve()
{
    int sum;
    scanf("%d",&sum);
    sum_of_four(sum);
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        solve();
    }
    return 0;
}


