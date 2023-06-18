#include<stdio.h>
int main()
{
	int a,b,d,i,j,t=0;
	char c;
	scanf("%d%d",&a,&b);
	d=a*b;
	for(i=0;i<d;i++)
	{
		scanf("%s",&c);
		if(c=='C'||c=='M'||c=='Y') t=1;
	}
	if(t==1) printf("#Color");
	else printf("#Black&White");
}