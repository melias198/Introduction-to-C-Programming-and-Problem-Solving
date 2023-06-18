#include<stdio.h>

int main()
{
    int n,odd,sum=0;
    scanf("%d",&n);
    printf("The odd numbers are : ");
    for(int i=0;i<n;i++)
    {
        odd=2*i+1;
        sum+=odd;
        printf("%d ",odd);
    }
    printf("\n");
    printf("The Sum of odd Natural Number upto %d terms : %d",n,sum);

    return 0;
}

