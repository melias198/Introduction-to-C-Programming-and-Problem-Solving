#include<stdio.h>

int main()
{
    int n,i,j,k,v,s;
    scanf("%d",&n);
    int arra[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arra[i]);
    }
    
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        scanf("%d %d",&s,&v);
        arra[s]=arra[s]+v;
      
    }
    for(i=0;i<n;i++)
    {
       printf("%d ",arra[i]);
    }
    

    return 0;
}



