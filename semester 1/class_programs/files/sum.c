//taking input of two numbers from inout file and displaying the sum in output file

#include<stdio.h>
int main()
{
    FILE *fp;
    FILE *fq;
    fp=fopen("sample.txt","r");
    fq=fopen("sample2.txt","w");
    int n1,n2;
    fscanf(fp,"%d",&n1);
    fscanf(fp,"%d",&n2);
    fprintf(fq,"%d",n1+n2);
    fclose(fq);
    fclose(fp);
    return 0;
}