#include<stdio.h>
#include<string.h>
int main()
{
    char s[10];
    printf("Enter string: ");
    gets(s);
    int n=strlen(s),v=0,c=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
        v++;
        else
        c++;
    }
    printf("Number of vowels and consonants: %d %d",v,c);
    return 0;
}