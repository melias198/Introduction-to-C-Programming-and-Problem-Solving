#include<stdio.h>

int main()
{
    
    int x,y;
    printf("Enter an Number : ");
    scanf("%d",&x);
    printf("Enter Possible Bonus Number : ");
    scanf("%d",&y);

    if(x+y>=100)
    printf("Yes! Possible.");
    else
    printf("Impossible!");
    
    

    return 0;
}