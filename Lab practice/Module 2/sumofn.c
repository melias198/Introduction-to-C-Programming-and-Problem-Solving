#include<stdio.h>

int main()
{
    int n;
    printf("Please enter an number : ");
    scanf("%d",&n);
    while(n>1)
    {
        printf("-->%d.\n",n);
        if(n%2==0)
        {
            n=n/2;
        }
        else
        {
            n=3*n+1;
        }
    }
    printf("---->%d.\n",n);

    
   

    return 0;
}