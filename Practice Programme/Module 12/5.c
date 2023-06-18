#include<stdio.h>
#include<string.h>
int main()
{
    
        char word[100];
        int n;
        scanf("%d",&n);
 
        for(int i=0;i<n;i++)
        {
        scanf("%s",word);
        int l = strlen(word);
        if(l>10)
        {
            printf("%c%d%c\n",word[0],l-2,word[l-1]);
        }
        else
        {
            puts(word);
        }
        }
    
    return 0;
}

