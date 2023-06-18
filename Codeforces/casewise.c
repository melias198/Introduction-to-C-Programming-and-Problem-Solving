#include<stdio.h>

int main()
{
    // 3ta input nibo,jodi 1st input jor hoi tahole porer 2ta jog korbo,bijor hoile biyog.
    int x,a,b,s;
    printf("Please enter three number: ");
    scanf("%d%d%d",&x,&a,&b);

    if(x%2==0)
    {
        printf("The sum is %d",s=a+b);
    }
    else{
        printf("The sub is %d",s=a-b);
    }

    return 0;
}