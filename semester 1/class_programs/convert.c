#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int n;
    char s[20],s1[20],s2[20];
    printf("Enter string: ");
    gets(s);
    n=strlen(s);
    strcpy(s1,s);
    strcpy(s2,s);
    for(int i=0;i<n;i+=2)
    {
       s[i]=toupper(s[i]);
    }
    printf("%s\n",s);
    for(int i=0;i<n;i+=2)
    {
        s1[i]=tolower(s1[i]);
    }
    printf("%s\n",s1);
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        s2[i]=toupper(s2[i]);
        else
        s2[i]=tolower(s2[i]);
    }
    printf("%s\n",s2);
    return 0;
}