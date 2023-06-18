#include<stdio.h>
#include<string.h>

void broken_keyboard(char s[])
{
     int len=strlen(s);
     for(int i=0;i<len;i++)
    {
        if(i%2==1)
        {
            printf("%c%c",s[i],s[i]);
        }
        else
        printf("%c",s[i]);
    }

}

int main()
{
    char s[100];
    scanf("%s",s);
    broken_keyboard(s);
    return 0;
}

