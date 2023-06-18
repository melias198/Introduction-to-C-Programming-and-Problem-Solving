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
    int temp;

    for (int j = 0; j < n; j++)
    {

        for (int i = 0; i < (n - 1); i++)
        {
            if (arra[i] > arra[i + 1])
            {
                temp = arra[i];
                arra[i] = arra[i + 1]; // for swipping
                arra[i + 1] = temp;
            }
        }

        for (int i = 0; i < n; i++)
        {
            printf("%d ", arra[i]);
        }
        printf("\n");
    }

    return 0;
}
