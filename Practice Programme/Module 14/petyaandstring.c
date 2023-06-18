#include <stdio.h>
#include <string.h>

int main()
{
    char s[100], t[100];
    fgets(s, sizeof(s), stdin);
    fgets(t, sizeof(t), stdin);

    int len = strlen(s) - 1;

    for (int i = 0; i < len; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] += 32;
        }
        if (t[i] >= 'A' && t[i] <= 'Z')
        {
            t[i] += 32;
        }
    }

    int flag = 1;

    for (int i = 0; i < len; i++)
    {
        if (s[i] < t[i])
        {
            flag = 0;
            printf("-1\n");
            break;
        }
        else if (s[i] > t[i])
        {
            flag = 0;
            printf("1\n");
            break;
        }
    }
    if (flag == 1)
    {
        printf("0\n");
    }

    return 0;
}
