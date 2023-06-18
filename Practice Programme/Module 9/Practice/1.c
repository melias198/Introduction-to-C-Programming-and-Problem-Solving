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
    for (i = n-1; i>=0; i--)
    {
        printf("%d ", arra[i]);
    }
    return 0;
}
