#include<stdio.h>
#define NFILE "sample.txt"
int main()
{
    FILE *p;
    p=fopen(NFILE,"w");
    putc('H',p);
    putc('A',p);
    putc('P',p);
    putc('P',p);
    putc('Y',p);
    fclose(NFILE);

    p=fopen(NFILE,"r");
    printf("%c",getc(p));
    printf("%c",getc(p));
    printf("%c",getc(p));
    printf("%c",getc(p));
    printf("%c",getc(p));
    fclose(NFILE);
    return 0;
}