#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[100];
    printf("Enter string: ");
    gets(str);
    int n=strlen(str);
    str[0]=toupper(str[0]);
    for(int i=0;i<n-1;i++)
    {
        if(str[i]==' ')
        str[i+1]=toupper(str[i+1]);
    }
    printf("%s",str);
    return 0;
}