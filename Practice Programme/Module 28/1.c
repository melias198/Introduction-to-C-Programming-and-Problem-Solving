#include<stdio.h>

void func(int x,int y,int* p,int* q)
{
    if(x>y)
    {
        *p=x;
        *q=y;
    }
    else
    {
         *p=y;
        *q=x;
    }
}

int main()
{
    int a=10,b=5;
    int small,large;
    func(a,b,&large,&small);
    printf("%d %d",large,small);
    return 0;
}

