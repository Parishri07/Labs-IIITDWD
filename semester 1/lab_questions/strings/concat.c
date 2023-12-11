#include<stdio.h>
#include<string.h>
int main()
{
    char s[10],t[10],c[20];
    printf("Enter strings: \n");
    scanf("%s %s",s,t);
    int k=0,i,j=0;
    for(i=0;s[i]!='\0';i++)
     c[i]=s[i];

    c[i]=' ';
    i++;

    for(;t[j]!='\0';j++,i++)
     c[i]=t[j];

    c[i]='\0';
    printf("New string: %s\n",c);
    printf("Characters: %d\n",i);

    strcat(s,t);
    printf("%s",s);
     return 0;
}