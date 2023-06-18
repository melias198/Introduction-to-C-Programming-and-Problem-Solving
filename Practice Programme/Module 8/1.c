#include<stdio.h>

int main()
{
    int arra[10];
    arra[0]=2333;
    arra[1]=333;
    arra[2]=arra[0]-arra[1];

    printf("%d\n",arra[0]);
    printf("%d\n",arra[1]);
    printf("%d",arra[2]);

    return 0;
}



