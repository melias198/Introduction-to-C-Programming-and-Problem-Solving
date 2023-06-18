#include<stdio.h>

int main()
{
    char name[20]="Elias";
    name[3]='i';
    name[5]='D';
    name[14]='\0';
     printf("%s",name);

    return 0;
}

