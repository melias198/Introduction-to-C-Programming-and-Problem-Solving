#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter the First sides of a triangle : ");
    scanf("%d", &a);
    printf("Enter the Second sides of a triangle : ");
    scanf("%d", &b);
    printf("Enter the Third sides of a triangle : ");
    scanf("%d", &c);

    if ((a + b > c) && (a + c > b) && (b + c > a))
        printf("Yes! Possible.");
    else
        printf("Not Posssible!");

    return 0;
}