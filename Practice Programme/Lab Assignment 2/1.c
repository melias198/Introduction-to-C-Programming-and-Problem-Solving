#include <stdio.h>

void series(int n)
{
    int sum = 0, flag = 0;
    for (int i = 1; i <= n; i++)
    {
        if (flag % 2 == 0)
        {
            sum += i;
        }
        else
        {
            sum -= i;
        }
        if (i % 3 == 0)
            flag++;
    }
    printf("%d", sum);
}

int main()
{
    int n;
    scanf("%d", &n);
    series(n);
    return 0;
}
