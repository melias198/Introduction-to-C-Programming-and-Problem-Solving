#include<stdio.h>

int main()
{
    int x,y,mul;
    char per='%';
    scanf("%d%c%d%c",&x,&per,&y,&per);
    mul=x*y;
    printf("%d%c",mul,per);
    return 0;
}