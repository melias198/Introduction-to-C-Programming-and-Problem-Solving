#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arra[15],ans[10],result[10];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arra[i]);
    }
   
    int max=arra[0];
    for(int i=0;i<n;i++)
    {
        if(arra[i]>max)
        {
            max=arra[i];
        }
    }
     for(int i=0;i<n;i++)
    {
        ans[i]=0;
    }

    for(int i=0;i<n;i++)
    {
        if(arra[i]==max)
        {
            continue;
        }
        ans[i]=max+arra[i];
    }
    for(int i=0;i<n;i++)
    {
        result[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        if(ans[i]%2==0)
        {
          result[i]=ans[i];
        }
    }
    
    int min=result[0];
    for(int i=0;i<n;i++)
    {
        if(result[i]>min)
       {
         min=result[i];
       }
    }
    printf("%d\n",min);
    

    return 0;
}

