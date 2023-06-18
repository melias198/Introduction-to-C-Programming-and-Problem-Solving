#include <stdio.h>

int main()
{
    int n, i, sum = 0;
    scanf("%d", &n);
    int arra[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arra[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (arra[i] % 2 == 1)
        {
            sum += arra[i];
        }
    }
    if (sum % 2 == 0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}