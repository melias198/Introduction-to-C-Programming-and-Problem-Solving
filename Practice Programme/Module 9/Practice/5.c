#include <stdio.h>

int main()
{
    int n, i, j, k;
    scanf("%d", &n);
    int arra[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arra[i]);
    }
    scanf("%d", &k);
    int sum, count = 0;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {

            if (i != j)
            {
                sum = arra[i];
                sum += arra[j];
            }
            else if (sum == k)
            {
                count += 1;
            }
        }
    }
    if (count >= 1)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}