#include<stdio.h>

int main()
{
    int a,b;
    printf("Please enter two numbrer : ");
    scanf("%d%d",&a,&b);

    if(a==b)
    printf("They are equal.");
    else if(a>b)
    printf("A is bigger.");
    else
    printf("B is bigger.");



    return 0;
}