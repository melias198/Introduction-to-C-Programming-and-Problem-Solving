#include<stdio.h>

int main()
{
    int t,ii;
    scanf("%d",&t);
    for(ii=1;ii<=t;ii+=1)
    {

    int n,i,sum=0;
    char c='%';
    scanf("%d%c",&n,&c);
    for(i=n;i<100;i++)
    {
      if(i<60)
      sum+=1;
      else if(i>=60 && i<80)
      sum+=2;
      else if(i>=80 && i<100)
      sum+=3;
    }
    printf("%d minutes\n",sum);
     

    }
    return 0;
}