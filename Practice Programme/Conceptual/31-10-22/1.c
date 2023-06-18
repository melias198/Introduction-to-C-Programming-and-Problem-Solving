#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);

    for(i=1; i<=n; i+=1)
    {
        for(j=i; j<=n; j+=1)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
