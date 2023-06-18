#include<stdio.h>

void func(int x,int y,int* p,int* q)
{
    *p=x>y?x:y;
    *q=x<y?x:y;
}

int main()
{
    int a=10,b=5;
    int small,large;
    func(a,b,&large,&small);
    printf("%d %d",large,small);
    return 0;
}

