#include<stdio.h>
int main()
{
    FILE *fp,*gp;
    fp=fopen("file1.txt","r");
    gp=fopen("file2.txt","w");
    char c[20];
    int i=0;
    while((c[i]=getc(fp))!=EOF)
    i++;
    
    i--;
    while(i>=0)
    {
       putc(c[i],gp);
       i--;
    }
    fclose(gp);
    fclose(fp); 
     return 0;
}