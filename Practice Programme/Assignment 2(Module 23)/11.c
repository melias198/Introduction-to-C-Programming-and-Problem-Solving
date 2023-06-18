#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int arr[n];
    int index=0,number=0;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            arr[index]=i;
            index++;
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(i%2==1)
        {
            arr[index]=i;
            index++;
        }
    }
    for(int i=0;i<index;i++)
    {
        printf("%d ",arr[i]);
        if(i==(k-1))
        {
            number+=arr[i];
        }
    }
    printf("\nThe %dth element in this sequence is %d.",k,number);
    return 0;
}