#include<stdio.h>
int main()
{
    FILE *fp,*fq;
    fp=fopen("file1.txt","r");
    fq=fopen("file2.txt","w");
    char ch;
    int i=0,j=0;
    char a[10][10];
    while((ch=getc(fp))!=EOF)
    {
       if(ch==' ')
       i++;
       else
       {
        a[i][j]=ch;
        j++;
       }
    }
    for(int k=0;k<i;k++)
    {
        int n=strlen(a[k]);
        for(int p=n-1;p>=0;p++)
         putc(a[k][p],fq);
        
    }
    while((ch=getc(fp))!=EOF)
    {
    char c[20];
    int i=0;
    while((c[i]=getc(fp))!=' ')
    i++;
    
    i--;
    while(i>=0)
    {
        
        i--;
    }
    }
    fclose(fq);
    fclose(fp);
     return 0;
}