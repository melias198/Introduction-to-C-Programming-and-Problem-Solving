#include<stdio.h>

int main()
{

    int n,count,sum=0;
    printf("Please enter an number : ");
    scanf("%d",&n);
    count=1;
    while (count<=n)
    {
        printf("%d. ",count);
        sum +=count;
        count++;
         
    }

    printf("\nThe sum of first %d terms number = %d.",n,sum);
    
    

    return 0;
}

