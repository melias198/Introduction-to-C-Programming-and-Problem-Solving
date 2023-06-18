#include <stdio.h>

int main()
{
    int n, m, domini;
    printf("Please enter the value of row : ");
    scanf("%d", &n);
    printf("Please enter the value of coloumns : ");
    scanf("%d", &m);

    if (n == 1 && m == 1)
        printf("The tight domini is %d", domini = 0);

    else if (n > 1 && m == 1)
        printf("The tight domini is %d", domini = n - 1);
    else if (n == 1 && m > 1)
        printf("The tight domini is %d", domini = m - 1);
    else
        printf("The tight domini is %d", domini = (m - 1) * n);

    return 0;
}