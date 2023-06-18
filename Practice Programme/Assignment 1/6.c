#include<stdio.h>

int main()
{
    int t,ii;
    scanf("%d",&t);
    for(ii=1;ii<=t;ii+=1)
    {
     long long int n, i, c=0;
    scanf("%lld", &n);
    if (n == 1)
        c = 1;
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            c = 1;
            break;
        }
    }
    if (c == 0)
        printf("Yes\n");
    else
        printf("No\n");

    }

    return 0;
}
