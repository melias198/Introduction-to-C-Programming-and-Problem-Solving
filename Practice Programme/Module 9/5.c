#include <stdio.h>

int main()
{
    int n, i, j;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("#");
    }
    printf("\n");

    for (j = 1; j <= (n - 2); j++)
    {
        printf("#");
        for (i = 1; i <= (n - 2); i++)
        {
            printf(" ");
        }
        printf("#\n");
    }

    for (i = 1; i <= n; i++)
    {
        printf("#");
    }
    printf("\n");

    return 0;
}
