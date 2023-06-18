#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arra[100];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arra[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arra[i]);
    }
    printf("\n");

    
    int sortedarra[n];

    for (int j = 0; j < n; j++)
    {
          int min = arra[0], index = 0;
        for (int i = 0; i < n; i++)
        {
            if (arra[i] < min)
            {
                min = arra[i];
                index = i;
            }
        }
        sortedarra[j] = min;
        arra[index] = 9999;
        for (int i = 0; i < n; i++)
        {
            printf("%d ", arra[i]);
        }
        printf("\n");
    }
     for (int i = 0; i < n; i++)
    {
        printf("%d ", sortedarra[i]);
    }
    printf("\n");

    return 0;
}
