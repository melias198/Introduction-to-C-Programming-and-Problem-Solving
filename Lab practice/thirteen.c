#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Please enter the value of one side : ");
    scanf("%d", &a);
    printf("Please enter the value of one side : ");
    scanf("%d", &b);
    printf("Please enter the value of one side : ");
    scanf("%d", &c);

    if ((a + b > c) && (a + c > b) && (b + c > a))
    {
        if (a == b && b == c)
        {
            printf("Equilateral Triangle");
        }
        else if ((a == b && b != c) || (a == c && c != b) || (b == c && b != a))
        {
            printf("Isosceles Triangle");
        }
        else
        {
            printf("Scalence Triangle");
        }
    }

    return 0;
}