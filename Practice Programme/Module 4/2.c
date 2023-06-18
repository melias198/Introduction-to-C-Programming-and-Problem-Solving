#include<stdio.h>

int main()
{
    int n,sum;
    n=1;
    sum=0;

    while (n<=10)
    {
        printf("%d. ",n);
        sum +=n;
        n++;
    }
        printf("\nThe sum of = %d.",sum);
    
    return 0;
}

