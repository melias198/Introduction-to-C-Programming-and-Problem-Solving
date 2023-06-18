#include<stdio.h>

int main()
{
    int n,i;
    int arra[100];
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arra[i]);
    }
    int max=arra[0];
    for(i=0;i<5;i++)
    {
        if(arra[i]>max)
        {
            max=arra[i];
        }
    }
    printf("The maximum value is = %d",max);
    

    return 0;
}



