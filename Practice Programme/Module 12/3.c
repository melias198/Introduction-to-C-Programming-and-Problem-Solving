#include <stdio.h>

int main()
{
    char word[100];
    fgets(word, sizeof(word), stdin);
    int count = 0, i = 0;
    while (word[i] != '\0')
    {
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u')

        {
            count++;
        }
        else if (word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U')
        {
            count++;
        }

        i++;
    }

    printf("The number of vowel : %d", count);
    return 0;
}
