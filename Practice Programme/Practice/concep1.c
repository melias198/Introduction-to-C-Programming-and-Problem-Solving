#include<stdio.h>

int main()
{

    int n,k,i,sum=0,nextroom=101,nextfloor=1;
    scanf("%d%d",&n,&k);

    for(i=1; i <=(n*k); i++)
    {
        sum +=nextroom;
        nextroom +=1;
        if(i%k==0)
        {
            nextfloor+=1;
            nextroom=(100*nextfloor)+1;
           
           
        }

    }
    printf("%d",sum);


    return 0;
}
