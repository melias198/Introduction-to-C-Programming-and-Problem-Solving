#include<stdio.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      printf("%d ",i);
    }
    printf("\n");

    for(i=1;i<=n-1;i++)
    {
       for(j=0;j<i;j++)
       {
         printf(" ");
       }
       for(j=1;j<=n-i;j++)
       {
        printf("%d ",j);
       }
       printf("\n");
    }
    return 0;
}