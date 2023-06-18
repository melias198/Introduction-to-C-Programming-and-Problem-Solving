#include<stdio.h>

int main()
{
    int n,m,i,r;
    scanf("%d%d",&n,&m);

    for(i=n; i<=m+24 ; i++)
    {
       if(i<=12)
       {
        printf("%d ",i);
       }
       else if(i>=24)
       {
        
        printf("%d ",(i%12));
       }
 
    }

    return 0;
}


