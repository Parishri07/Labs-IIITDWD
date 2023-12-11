#include<stdio.h>
#include<string.h>
void u_case(char *p)
{
    if(*p<97)
    {
    *p+=32;
    printf("%c",*p);
    }
    else
    printf("%c",*p);
}
void l_case(char *p)
{
    if(*p>=97)
    {
    *p-=32;
    printf("%c",*p);
    }
    else
    printf("%c",*p);
}
int main()
{
  char s[30];
  printf("Enter a string: ");
  gets(s);
  char *p;
  int n=strlen(s);
  p=&s[0];

  for(int i=0;i<n;i++)
  {
    if(i%2==0)
    u_case(p++);
    else
    l_case(p++);
  }
}