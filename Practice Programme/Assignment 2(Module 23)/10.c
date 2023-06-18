#include<stdio.h>

char gpa_count(int a)
{
    if(a>=0 && a<=39)
    return 'F';
    else if(a>=40 && a<=59)
    return 'C';
    else if(a>=60 && a<=79)
    return 'B';
    else if(a>=80 && a<=100)
    return 'A';

}

int main()
{
    int n;
    scanf("%d",&n);
    char gpa=gpa_count(n);
    printf("%c",gpa);
    return 0;
}

