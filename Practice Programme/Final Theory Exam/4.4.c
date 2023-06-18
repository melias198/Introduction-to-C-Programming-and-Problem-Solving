#include <stdio.h>
#include <string.h>
int main()
{
    char word[100];
    scanf("%s", word);
    int lenght = strlen(word), max = 26;
    int sort[max + 1];
    for (int i = 0; i <= max; i++)
    {
        sort[i] = 0;
    }
    for (int i = 0; i < lenght; i++)
    {
        sort[(word[i] - 'a') + 1]++;
    }

    for (int i = 0; i <=max; i++)
    {
        if (sort[i] != 0)
        {
            while (sort[i] > 0)
            {
                
                printf("%c", i+96);
                sort[i]--;
            }
        }
    }
    return 0;
}

