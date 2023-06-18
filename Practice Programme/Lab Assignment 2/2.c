#include <stdio.h>
#include <string.h>

void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    char s[100];
    scanf("%s", s);
    int n = strlen(s);

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (s[j] < s[j + 1])
            {
                swap(&s[j], &s[j + 1]);
            }
        }
    }

    printf("%s", s);
    return 0;
}