#include <stdio.h>

int main()
{
    int n, i, uni;
    scanf("%d", &n);
    int arra[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arra[i]);
    }
    int count=0;
    uni = arra[0];
    for (i = 0; i < n; i++)
    {
        if (arra[i] == uni)
        {
            count++;
        }
    }
    if(count==n)
    {
        printf("Yes\n");
    }
    else{
        printf("No");
    }
    
    return 0;
}
