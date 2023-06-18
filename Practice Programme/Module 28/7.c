#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    n=5;
    int* ptr;
    ptr=(int*)malloc(n*sizeof(int));
    if(ptr==NULL)
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
    n=10;
    ptr=realloc(ptr,n*sizeof(int));

    if(ptr==NULL)
    {
        printf("Memory Allocation Faild");
    }
    else
    {
        for(int i=5;i<n;i++)
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

