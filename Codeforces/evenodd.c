#include<stdio.h>

int main ()
{
    int a;
    printf("Please enter an number: ");
    scanf("%d",&a);

    if(a%2==0)
    {
      printf("This is an even number.\n");
    }
    else
    {
      printf("This is an odd number.");
    }

    return 0;
}
