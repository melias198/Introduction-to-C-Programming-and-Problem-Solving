#include<stdio.h>
#include<string.h>

int main()
{
    char name[50],print[50];
    scanf("%s",name);
    int n=strlen(name);
    int newstr[256]={0};
    for(int i=0;i<n;i++)
    {
        newstr[name[i]]++;
    }
   int index;
   for(int i= 0, index = 0; i < 256; i++){
        if(newstr[i] != 0){
            while(newstr[i] > 0)
            {
                print[index++]=i;
                newstr[i]--;
            }
        }
    }
    printf("%s",print);
    return 0;
}

