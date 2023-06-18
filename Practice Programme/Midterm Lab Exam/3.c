#include<stdio.h>

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int matrix[100][100];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }

     for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
           if(matrix[i][j]==i && matrix[i][j]==j)
           {
            matrix[i][j]+=3;
           }
           else if(matrix[i][j]==i)
           {
            matrix[i][j]+=2;
           }
           else if(matrix[i][j]==j)
           {
            matrix[i][j]+=1;
           }
        }
    }

     for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
          printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

