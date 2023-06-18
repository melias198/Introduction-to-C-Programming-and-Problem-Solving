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
    int* ptr2;
    ptr2=realloc(ptr,n*sizeof(int));

    if(ptr2==NULL)
    {
        printf("Memory Allocation Faild");
    }
    else
    {
        for(int i=5;i<n;i++)
    {
        scanf("%d",(ptr2+i));
    }

    for(int i=0;i<n;i++)
    {
        printf("%d-->%d\n",i,*(ptr2+i));
    }
    }

    free(ptr2);
    return 0;
}

