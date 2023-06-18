#include <stdio.h>

int main()
{
    int n, i, sum = 0;
    scanf("%d", &n);
    int arra[n];

    for (i = 0; i < n; i++)
    {
        if (i == 0 || i == 1)
        {
            arra[i] = i;
            printf("%d ", arra[i]);
        }
        else
        {
            arra[i] = arra[i - 2] + arra[i - 1];
            printf("%d ", arra[i]);
        }
    }

    return 0;
}