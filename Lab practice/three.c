#include<stdio.h>

int main()
{
    int a;
    printf("Please enter an mnumber: ");
    scanf("%d",&a);

    if(a>=0)
    {
        printf("%d is an positive number.",a);
    }
    else{
        printf("%d is an negative number.",a);
    }

    return 0;
}