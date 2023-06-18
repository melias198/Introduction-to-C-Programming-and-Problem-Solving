#include <stdio.h>

int main()
{
    int magic[3][3], i, j;
    int flag = 0, sum, sum1, sum2;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &magic[i][j]);
        }
    }
    sum = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i == j)
                sum += magic[i][j];
        }
    }
    for (i = 0; i < 3; i++)
    {
        sum1 = 0;
        for (j = 0; j < 3; j++)
        {
            sum1 += magic[i][j];
        }
        if (sum == sum1)
            flag = 1;
        else
        {
            flag = 0;
            break;
        }
    }
    for (i = 0; i < 3; i++)
    {
        sum2 = 0;
        for (j = 0; j < 3; j++)
        {
            sum2 += magic[i][j];
        }
        if (sum == sum2)
            flag = 1;
        else
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}
