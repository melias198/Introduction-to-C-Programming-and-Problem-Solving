#include<stdio.h>

int main()
{
    int a;
    printf("Please enter an number: ");
    scanf("%d",&a);

    if(a%2==0)
    {
        printf("%d is an integer even number.",a);
    }
    else{
        printf("%d is an integer odd number.",a);
    }
    return 0;
}