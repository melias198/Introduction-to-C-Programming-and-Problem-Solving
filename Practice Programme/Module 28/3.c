#include<stdio.h>

int main()
{
    int a=5;
    double b=4.5;
    int* pi;
    double* pd;
    pi=&a;
    pd=(double*)pi;//typecasting
    printf("%d %lf",a,b);
    return 0;
}

