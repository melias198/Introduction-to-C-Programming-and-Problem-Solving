#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d%d", &n, &k);
    int arra[n];

    for (int i = 1; i <= n; i++)
    {
        arra[i] = 0;
    }

    for (int i = 1, j = 2; j <= n; i++, j += 2)
    {
        arra[i] = j;
    }
    for (int i = (n / 2) + 1, j = 1; j <= n; i++, j += 2)
    {
        arra[i] = j;
    }
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", arra[i]);
    }
    for (int i = 1; i <= n; i++)
    {
        if (i == k)
            printf("\nThe %dth element in this sequence is %d", i, arra[i]);
    }

    return 0;
}
