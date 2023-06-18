#include <stdio.h>

int main()
{
    long long int n, k, a,m;
    scanf("%lld%lld", &n, &k);

    a=(n/2) + (n%2!=0);

    if(k<=a)
    {
        m=(2*k)-1;
    }
    else{
        m=(k-a)*2;
    }
    printf("%lld",m);

    return 0;
}
