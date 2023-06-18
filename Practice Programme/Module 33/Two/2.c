#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch >= 'a' && ch <= 'z')
    {
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        {
            printf("Vowel");
        }
        else
        {
            printf("Consonent");
        }
    }
    else if(ch=='1' || ch=='2' || ch=='3' || ch=='4' || ch=='5' || ch=='6' || ch=='7' ||ch=='8' || ch=='9')
    {
        printf("Number");
    }
    else
    {
        printf("Invalid");
    }
    return 0;
}

