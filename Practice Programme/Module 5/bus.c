#include<stdio.h>

int main()
{
    int n,pass,sum,w;
    printf("Please enter the number of passenger : ");
    scanf("%d",&n);
    sum=0;
    pass=1;

    while (pass<=n)
    {
        scanf("%d",&w);
        pass++;
        sum +=w;
    }
    printf("The total weights of passengers %d",sum);
    

    return 0;
}

