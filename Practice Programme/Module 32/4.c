#include<stdio.h>

void function(int i,int n)
{
if(i>n)
return;
function(i+1,n);
printf("%d ",i);
}
int main()
{
    int n;
    scanf("%d",&n);
    function(1,n);
    return 0;
}

