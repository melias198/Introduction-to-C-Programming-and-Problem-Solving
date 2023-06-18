#include<stdio.h>

int main()
{

    int n,i,m,j;
    scanf("%d",&n);
    
    for(j=0;j<n;j++)
    {
      scanf("%d",&m);
    
    for(i=1;i<=m/2; i++)
    {
        
        {
            printf("%d %d ",m/2+i,i);
        }
      
    }

    if(i>m/2 && m%2!=0)
    {
        printf(" %d\n",m);
      
    }
    }
   
    
 
    
    

    return 0;
}



