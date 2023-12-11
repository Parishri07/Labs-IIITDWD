#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char s[20],ch;
    int count=0;
    fp=fopen("sample.txt","w");
    putc('H',fp);
    putc('\n',fp);
    putc('E',fp);
    putc('L',fp);
    putc('L',fp);
    putc('\n',fp);
    putc('O',fp);
    fclose(fp);

    fp=fopen("sample.txt","r");
    while((ch=getc(fp)) != EOF)
    {
      if(ch=='\n')
      count++;
    }
    fclose(fp);

    printf("%d",count);
    return 0;
}