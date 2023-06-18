#include <stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);
    int arra[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arra[i]);
    }
    int k,max = arra[0];
    scanf("%d",&k);
    for (i = 0; i < n; i++)
    {
        if (arra[i] > max)
        {
            max = arra[i];
        }
    }
    int array[max + 1];
    for (i = 0; i <= max; i++)
    {
        array[i] = 0;
    }
    for (i = 0; i < n; i++)
    {
        array[arra[i]] += 1;
    }
    int count=0;
    for (i = 0; i <= max; i++)
    {
        if (array[i] == 1)
        {
            count++;
        }
          if (count==k)
        {
            printf("%d",i);
            break;
        }
       
    }

    return 0;
}