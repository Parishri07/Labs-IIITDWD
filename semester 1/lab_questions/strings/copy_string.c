#include<stdio.h>
#include<string.h>
int main()
{
    char s[20],v[20];
    printf("Enter string: ");
    gets(s);
    int i=0;
    for(;s[i]!='\0';i++)
    {
        v[i]=s[i];
    }
    v[i]='\0';
    printf("Copied strings are: %s \n",v);
    printf("Number of characters: %d",i);
    return 0;
}