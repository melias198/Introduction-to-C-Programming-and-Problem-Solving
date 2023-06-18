#include <stdio.h>

int main()
{
    int n, i, c;
    scanf("%d", &n);
    if (n == 0 || n == 1)
        c = 1;
    for (i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            c = 1;
            break;
        }
    }
    if (c == 1)
        printf("Composite");
    else
        printf("Prime");
    return 0;
}
