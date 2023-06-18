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
    int min=arra[0];
    for(i=0;i<5;i++)
    {
        if(arra[i]<min)
        {
            min=arra[i];
        }
    }
    printf("The minimum value is = %d",min);
    

    return 0;
}

