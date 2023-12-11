#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("test.txt","r");
    char s[100];
    printf("The string is: %s\n",fgets(s,100,fp));
    printf("%s",s);
    fclose(fp);
    return 0;
}