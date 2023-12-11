#include<stdio.h>
int main()
{
    FILE *p;
    p=fopen("test.txt","a");
    fprintf(p,"\n%c",'A');
    fprintf(p,"%c",'P');
    fprintf(p,"%c",'P');
    fprintf(p,"%c",'L');
    fputc('E',p);
    fprintf(p,"\n%s","BANANA");
    fclose(p);
    return 0;
}