#include<stdio.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    int arra[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arra[i]);
    }
    for(i=1;i<=n;i++)
    {
        printf("%d - ",i);
        for(j=1;j<=n;j++)
        {
            if(i!=j)
            printf("%d ",j); 
        }
        printf("\n");
    }

    return 0;
}



