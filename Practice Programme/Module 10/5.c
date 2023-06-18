#include <stdio.h>

int main()
{
    int n, i, j, prime, count = 0;
    scanf("%d", &n);
    int array[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    for (i = 0; i < n; i++)
    {
        prime = 0;
        for (j = 2; j < array[i]; j++)
        {
            if (array[i] % j == 0)
            {
                prime = 1;
                break;
            }
        }
        if (prime == 0)
        {
            count++;
        }
    }
    printf("%d\n", count);

    for (i = 0; i < n; i++)
    {
        prime = 0;
        for (j = 2; j < array[i]; j++)
        {
            if (array[i] % j == 0)
            {
                prime = 1;
                break;
            }
        }
        if (prime == 0)
        {
            printf("%d ", array[i]);
        }
    }

    return 0;
}