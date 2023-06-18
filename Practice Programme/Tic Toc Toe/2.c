 for(int i=1;i<=n;i++)
    {
    for(int j=1;j<=n;j++)
    {
        if(tictoc[i][j]==x)
        {
            if(tictoc[i][j]==1)
            {
                if(tictoc[i][1]==tictoc[i][2] && tictoc[i][2]==tictoc[i][3])
                 printf("X");
                if(tictoc[1][j]==tictoc[2][j] && tictoc[2][j]==tictoc[3][j])
                 printf("X");
                if(tictoc[1][1]==tictoc[2][2] && tictoc[2][2]==tictoc[3][3])
                 printf("X");
                if(tictoc[1][3]==tictoc[2][2] && tictoc[2][2]==tictoc[3][1])
                 printf("X");
            }
            else
            {
                if(tictoc[i][1]==tictoc[i][2] && tictoc[i][2]==tictoc[i][3])
                 printf("O");
                if(tictoc[1][j]==tictoc[2][j] && tictoc[2][j]==tictoc[3][j])
                 printf("O");
                if(tictoc[1][1]==tictoc[2][2] && tictoc[2][2]==tictoc[3][3])
                 printf("O");
                if(tictoc[1][3]==tictoc[2][2] && tictoc[2][2]==tictoc[3][1])
                 printf("O");
            }
        }
        else
        {
            printf(" ");
        }
        if(j<n)
        printf("\t|\t");
    }
    printf("\n");
    if(i<n)
    printf("---------------------------------");
    printf("\n");
   }