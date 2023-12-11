#include<stdio.h>
#define FILEN "sample.txt"
int main()
{
    FILE *fp;
    fp= fopen(FILEN,"w");
    putc('H',fp);
    putc('E',fp);
    putc('L',fp);
    putc('L',fp);
    putc('O',fp);
    putc('W',fp);
    putc('O',fp);
    putc('R',fp);
    putc('L',fp);
    putc('D',fp);
    fclose(fp);
    return 0;
}