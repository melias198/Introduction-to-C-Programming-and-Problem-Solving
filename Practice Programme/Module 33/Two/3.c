#include<stdio.h>

int main()
{
    char ch;
    scanf("%c",&ch);
    switch (ch)
    {
    case 'a':
    case 'i':
    case 'e':
    case 'o':
    case 'u':
        printf("Vowel");
        break;
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
        printf("Number");
        break;
    case '@':
    case '#':
    case '$':
    case '%':
    case '^':
    case '&':
    case '*':
    case '(':
    case ')':
    case '!':
        printf("Symbol");
        break;    
    default:
        printf("Consonant");
        break;
    }
    return 0;
}

