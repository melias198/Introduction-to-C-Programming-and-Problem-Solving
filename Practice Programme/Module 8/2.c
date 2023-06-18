#include<stdio.h>

int main()
{
    int arra[5];
    int i;

    for(i=0;i<5;i++)
    {
        scanf("%d",&arra[i]);
    }
    for ( i = 0; i < 5; i++)
    {
         printf("%d-th position = %d\n",i,arra[i]);
    }
    

    return 0;
}



