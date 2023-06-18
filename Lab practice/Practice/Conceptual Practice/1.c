#include<stdio.h>

int main()
{
    int a,b,c,d;
    printf("Enter Skills Of Four Players Respectively : ");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    
    if(a>c && a>d && b>c && b>d)
    {
     printf("Not Possible.");
    }
     else if(c>a && d>a && c>b && d>b)
        {
     printf("Not Possible.");
     }
     else
     printf("Yes! Possible.");


      
     

    return 0;
}