#include <stdio.h>

void array_sorting(int arra[], int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arra[j] > arra[j + 1])
            {
                temp = arra[j];
                arra[j] = arra[j + 1];
                arra[j + 1] = temp;
            }
        }
    }
}

float median_function(int arra[], int n)
{
    float median = 0;
    if (n % 2 == 0)
        median = (arra[(n - 1) / 2] + arra[n / 2]) / 2.0;
    else
        median = arra[n / 2];
    return median;
}

int main()
{
    int n;
    scanf("%d", &n);
    int arra[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arra[i]);
    }
    array_sorting(arra, n);
    printf("The sorted array is : ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arra[i]);
    }

    float result = median_function(arra, n);

    printf("\nMedian : %f", result);

    return 0;
}
