#include <stdio.h>

int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int a[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    if (row == col)
    {
        int ans = 1;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (i+j == (row-1))
                {
                    continue;
                }
                if (a[i][j] != 0)
                {
                    ans = 0;
                }
            }
        }
        // secondary diagonal
        if (ans == 1)
        {
            printf("Diagonal\n");
        }
        else
        {
            printf("Not Diagonal\n");
        }
    }
    else
    {
        printf("Not Diagonal\n");
    }

    return 0;
}
