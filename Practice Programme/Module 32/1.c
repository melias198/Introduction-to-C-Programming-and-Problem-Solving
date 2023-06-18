#include<stdio.h>

void function(int i,int n)
{
if(i>n)
return;
printf("%d ",i);
function(i+1,n);
}
int main()
{
    int n;
    scanf("%d",&n);
    function(1,n);
    return 0;
}

