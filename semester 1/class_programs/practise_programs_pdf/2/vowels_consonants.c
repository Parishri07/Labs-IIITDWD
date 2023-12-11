#include<stdio.h>
#include<string.h>

int vowel=0,consonant=0;
void count(char *q)
{
   while(*q!='\0')
   {
   if(*q=='a' || *q=='e' || *q=='i' || *q=='o' || *q=='u')
   vowel++;
   else
   consonant++;
   
   q++;
   }
   printf("Vowels: %d",vowel);
}
int main()
{
    char s[10];
    printf("Enter the string: ");
    scanf("%s",s);
    char *p=&s[0];
    count(p);
    return 0;
}