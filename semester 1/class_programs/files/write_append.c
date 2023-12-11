#include<stdio.h>
int main()
{
    FILE *fp;

    fp=fopen("sample.txt","w");
    putc('H',fp);
    putc('I',fp);
    fclose(fp);

    fp=fopen("sample.txt","a");
    fprintf(fp,"\n");
    putc('W',fp);
    putc('O',fp);
    putc('R',fp);
    putc('L',fp);
    putc('D',fp);
    fclose(fp);
    return 0;
}