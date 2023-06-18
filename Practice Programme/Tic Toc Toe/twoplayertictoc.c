#include<stdio.h>
#include<stdbool.h>

int iswin(int tictoc[][4],int n)
{
 for(int i=1;i<=n;i++)
 {
    if(tictoc[i][1]==tictoc[i][2] && tictoc[i][2]==tictoc[i][3] && tictoc[i][1]!=-1)
    {
        return tictoc[i][1];
    }
 }
 for(int j=1;j<=n;j++)
 {
    if(tictoc[1][j]==tictoc[2][j] && tictoc[2][j]==tictoc[3][j] && tictoc[1][j]!=-1)
    {
        return tictoc[1][j];
    }
 }
 if(tictoc[1][1]==tictoc[2][2] && tictoc[2][2]==tictoc[3][3] && tictoc[1][1]!=-1)
 {
    return tictoc[1][1];
 }
 if(tictoc[1][3]==tictoc[2][2] && tictoc[2][2]==tictoc[3][1] && tictoc[1][3]!=-1)
 {
    return tictoc[1][3];
 }
 return -1;
}

void printcell(int tictoc[][4],int n)
{
   for(int i=1;i<=n;i++)
   {
    for(int j=1;j<=n;j++)
    {
        if(tictoc[i][j]==-1)
        printf(" ");
        if(tictoc[i][j]==1)
        printf("X");
        if(tictoc[i][j]==2)
        printf("O");
        if(j<n)
        printf("\t|\t");
    }
    printf("\n");
    if(i<n)
    printf("---------------------------------");
    printf("\n");
   }
}

void printwin(int tictoc[][4],int n,int x)
{
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
                 else if(tictoc[1][j]==tictoc[2][j] && tictoc[2][j]==tictoc[3][j])
                 printf("X");
            }
            else
            {   
                 if(tictoc[i][1]==tictoc[i][2] && tictoc[i][2]==tictoc[i][3])
                 printf("O");
                 else if(tictoc[1][j]==tictoc[2][j] && tictoc[2][j]==tictoc[3][j])
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
}

int main()
{
    int n=3;
    int tictoc[4][4];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            tictoc[i][j]=-1;
        }
    }
    bool player1=true;
    bool player2=false;
    while (true)
    {
        printcell(tictoc,n);
        if(player1==true)
        {
            int r,c;
            Flag:
            printf("Player 1 Turn (X), Enter Row and Column : ");
            scanf("%d %d",&r,&c);
            if(tictoc[r][c]!=-1)
            {
                printf("Invalid Cell\n");
                goto Flag;
            }
            tictoc[r][c]=1;
            player1=false;
            player2=true;
        }
        else
        {
            int r,c;
            Flag2:
            printf("Player 2 Turn (O), Enter Row and Column : ");
            scanf("%d %d",&r,&c);
            if(tictoc[r][c]!=-1)
            {
                printf("Invalid Cell\n");
                goto Flag2;
            }
            tictoc[r][c]=2;
            player1=true;
            player2=false;
        }
        if(iswin(tictoc,n)==1)
        {
            printf("Player 1 Won!\n");
            printwin(tictoc,n,1);
            break;
        }
        else if(iswin(tictoc,n)==2)
        {
            printf("Player 2 Won!\n");
            printwin(tictoc,n,2);
            break;
        }
    }
    return 0;
}

