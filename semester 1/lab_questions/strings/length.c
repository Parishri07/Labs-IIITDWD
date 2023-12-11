#include<stdio.h>
#include<string.h>
int main()
{
    char s[10];
    printf("Enter string: ");
    scanf("%s",s);
    int p=0,q;
    for(int i=0;s[i]!='\0';i++)
     p++;
    q=strlen(s);
    printf("Length: %d %d",p,q);
    return 0;
}