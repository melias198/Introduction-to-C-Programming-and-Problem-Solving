#include <stdio.h>

int main()
{
    int a, b, c, d, large, small;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    if (a > b && a > c && a > d)
        large = a;
    else if (a < b && a < c && a < d)
        small = a;
    if (b > a && b > c && b > d)
        large = b;
    else if (b < a && b < c && b < d)
        small = b;
    if (c > a && c > b && c > d)
        large = c;
    else if (c < a && c < b && c < d)
        small = c;
    if (d > a && d > b && d > c)
        large = d;
    else if (d < a && d < b && d < c)
        small = d;
    printf("Largest = %d\n", large);
    printf("Smallest = %d", small);

    return 0;
}
