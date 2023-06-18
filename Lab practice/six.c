#include <stdio.h>

int main()
{

    int m;
    printf("Please enter an number: ");
    scanf("%d", &m);

    if (m > 0)
    {
        printf("The value of n is = 1");
    }
    else if (m == 0)
    {
         printf("The value of n is = 0");
    }
    else
    {
         printf("The value of n is = -1");
    }

    return 0;
}