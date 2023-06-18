#include<stdio.h>

int main()
{
   long long int n,i;
   scanf("%lld",&n);
   for(i=0; n!=0; i++)
   {
    n=n/10;
   }
   printf("%d digits",i);
   return 0;
}


