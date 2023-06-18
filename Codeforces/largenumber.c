#include <stdio.h>

int main()
{
    int a, b;
    printf("Please enter two number: ");
    scanf("%d%d", &a, &b);

    if (a > b)
    {
        printf("The large number is %d", a);
    }

    else
    {
        if (a < b)
        {
            printf("The large number is %d", b);
        }
        else
        {
            printf("They are equal.");
        }
    }

    return 0;
}