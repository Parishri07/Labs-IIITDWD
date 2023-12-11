#include<stdio.h>
int main()
{
    FILE *fp,*fq,*fr;
    fp=fopen("sample.txt","r");
    fq=fopen("sample2.txt","r");
    fr=fopen("sample3.txt","w");
    char ch;
    while((ch=getc(fp))!=EOF)
      putc(ch,fr);
    while((ch=getc(fq))!=EOF)
      putc(ch,fr);
    fclose(fr);
    fclose(fq);
    fclose(fp);
    return 0;
}