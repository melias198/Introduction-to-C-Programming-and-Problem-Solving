#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Please enter three number : ");
    scanf("%d%d%d", &a, &b, &c);

    if (a > b && a > c)
        printf("A is bigger.");

    else if (b > c && b > a)
        printf("B is bigger.");

    else if (c > a && c > b)
        printf("C is bigger.");
    else if (a == b && b == c)
        printf("Both three are equal.");

    else if (a == b)
        printf("A and B both are bigger.");

    else if (a == c)
        printf("A and C both are bigger");

    else
        printf("B and C both are bigger.");

    return 0;
}