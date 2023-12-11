#include<stdio.h>
int main()
{
    char s[30];
    int count=0;
    FILE *fp;
    fp=fopen("test.txt","r");
    fgets(s,10,fp);
    fclose(fp);

    fp=fopen("test.txt","w");
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
        count++;
    }
    fprintf(fp,"%d",count);
    fclose(fp);
     return 0;
}