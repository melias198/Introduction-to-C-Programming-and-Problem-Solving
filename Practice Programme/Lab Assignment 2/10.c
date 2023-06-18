#include<stdio.h>

void  is_seven_present(int* array,int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        int a=array[i],ld;
        while(a>0)
        {
            ld=a%10;
            if(ld==7)
            {
              count++;
            }
            a=a/10;
        }
    }
    if(n%2==0)
    {
        if(count>=n/2)
        printf("Beautiful");
        else
        printf("Ugly");
    }
    else
    {
        if(count>=(n/2)+1)
        printf("Beautiful");
        else
        printf("Ugly");
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    int arra[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arra[i]);
    }
    is_seven_present(&arra,n);

    return 0;
}

