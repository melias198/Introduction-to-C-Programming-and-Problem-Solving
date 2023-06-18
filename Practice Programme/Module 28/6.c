#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int* ptr;
    ptr=(int*)malloc(n*sizeof(int));
    if(ptr==NULL)//good practice
    {
        printf("Memory Allocation Faild");
    }
    else
    {
        for(int i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
    }

    for(int i=0;i<n;i++)
    {
        printf("%d-->%d\n",i,*(ptr+i));
    }
    }
    free(ptr);
    return 0;
}

