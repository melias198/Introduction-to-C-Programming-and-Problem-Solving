#include <stdio.h>
#include <string.h>

int main()
{
    char name[50];
    scanf("%s", name);
    int n = strlen(name);
    int max=name[0];
    for(int i=0;i<n;i++)
    {
      if(name[i]>max)
      max=name[i];
    }
    char newstr[max];
    for (int i = 0; i <=max; i++)
    {
        newstr[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        newstr[name[i]]++;
    }
    for (int i = 0; i <=max; i++)
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
