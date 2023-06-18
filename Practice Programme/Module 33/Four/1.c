#include<stdio.h>

int main()
{
    FILE * logFile=fopen("log.txt","a");
    fprintf(logFile,"It's 2:45 PM\n");
    return 0;
}

