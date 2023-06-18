#include<stdio.h>

int main()
{
    FILE * inputFile;
    FILE * outputFile;
    inputFile=fopen("input.txt","r");
    outputFile=fopen("output.txt","w");
    if(inputFile==NULL)
    {
        fprintf(outputFile,"Not Found");
        return 0;
    }
    int n,sum=0;
    fscanf(inputFile,"%d",&n);
    for(int i=0;i<n;i++)
    {
        int a;
        fscanf(inputFile,"%d",&a);
        sum+=a;
    }
    fprintf(outputFile,"Sum --> %d",sum);
    return 0;
}

