#include <stdio.h>
#include <string.h>

int main()
{
    char name[50];
    scanf("%s", name);
    int n = strlen(name);
    char newstr[123];
    for (int i = 0; i < 123; i++)
    {
        newstr[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        newstr[name[i]]++;
    }
    for (int i = 0; i < 123; i++)
    {
        if (newstr[i] != 0)
        {
            while (newstr[i] > 0)
            {
                printf("%c", i);
                newstr[i]--;
            }
        }
    }
    return 0;
}
