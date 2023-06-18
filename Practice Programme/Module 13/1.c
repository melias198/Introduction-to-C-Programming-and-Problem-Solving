#include <stdio.h>

int main()
{
    int row = 4, col = 3;
     for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d,%d ",i,j);
        }
        printf("\n");
    }


    return 0;
}
