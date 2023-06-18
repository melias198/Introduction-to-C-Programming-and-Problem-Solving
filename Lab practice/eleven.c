#include<stdio.h>

int main()
{
    int a,b,c,d,s;
    float x1,x2;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("Enter the value of b : ");
     scanf("%d",&b);
    printf("Enter the value of c : ");
     scanf("%d",&c);
    d=b*b-4*a*c;
    s=sqrt(b*b-4*a*c);
    x1=(-b-s)/(2*a);
    x2=(-b+s)/(2*a);
    if(d>=0)
    {
        printf("x1 = %f\n",x1);
         printf("x2 = %f\n",x2);

    }
    else{
        printf("Root are imaginary\n");
        printf("No solution!");
    }
    return 0;
}