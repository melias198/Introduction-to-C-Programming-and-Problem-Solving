#include<stdio.h>
#include<math.h>
int fact(int n);



int main()
{
   int n,r;
   scanf("%d %d",&n,&r);
   int perm,comb;
   perm=fact(n)/fact(n-r);
   comb= fact(n)/(fact(n-r)*fact(r));
   printf("nPr = %d\n",perm);
   printf("nCr = %d",comb);

    return 0;
}



int fact(int n)
{
  int res=1;
  for(int i=1;i<=n;i++)
   {
    res *=i;
   }
   return res;

}

