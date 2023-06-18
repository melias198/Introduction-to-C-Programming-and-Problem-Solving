#include <stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);
    int arra[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arra[i]);
    }
    int max = arra[0];
    for (i = 0; i < n; i++)
    {
        if (arra[i] > max)
        {
            max = arra[i];
        }
    }
    int array[max + 1];
    for (i = 0; i <= max; i++)
    {
        array[i] = 0;
    }
    for (i = 0; i < n; i++)
    {
        array[arra[i]] += 1;
    }
    for (i = 0; i <= max; i++)
    {
        if (array[i] == 1)
        {
            printf("%d ", i);
        }
    }

    return 0;
}