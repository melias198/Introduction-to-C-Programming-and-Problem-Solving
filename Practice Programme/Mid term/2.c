#include <stdio.h>
int main()
{
    int arra[15];

    for (int i = 1; i <= 15; i++)
    {
        if (i == 1)
        {
            arra[i] = 1;
            printf("%d ", arra[i]);
            continue;
        }
        arra[i] = arra[i - 1] * 2;
        printf("%d ", arra[i]);
    }
    return 0;
}
