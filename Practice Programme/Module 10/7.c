#include <stdio.h>

int main()
{
    int m, n, i,b, a = 0;
    char c;
    scanf("%d %d",&m,&n);
    b = m * n;
    for (i = 0; i <(m*n); i++)
    {
        scanf(" %c", &c);
        if (c == 'C' || c == 'M' || c == 'Y')
        {
            a = 1;
        }
    }
    if (a == 1)
    {
        printf("#Color");
    }
    else
    {
        printf("#Black&White");
    }

    return 0;
}