#include <stdio.h>

int main()
{
    long long int n, i, m, sum1 = 0, sum2 = 0;
    scanf("%lld", &n);
    for (i = 1; i <= n; i++)
    {
        sum1 += i;
    }

    for (i = 1; i < n; i++)
    {
        scanf("%lld", &m);
        sum2 += m;
    }

    printf("%lld", sum1 - sum2);
    return 0;
}
