#include <stdio.h>

int main()
{
    int n, m, i;
    scanf("%d%d", &n, &m);

    if (n > m)
    {
        for (i = n; i <= m + 24; i++)
        {
            printf("%d ", i % 24);
        }
    }
    else
    {
        for (i = n; i <= m; i++)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
