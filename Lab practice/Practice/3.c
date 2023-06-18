#include<stdio.h>

int main()
{

    int a;
    printf("Please enter an integer number : ");
    scanf("%d",&a);

    if(a%2==0)
    printf("Its an even Number.");
    else
    printf("Its an odd Number.\n");

    

    return 0;
}