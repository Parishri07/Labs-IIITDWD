#include<stdio.h>
#include<string.h>

void swap(char *a,char *b)
{
  int tmp=*a;
  *a=*b;
  *b=tmp;
}

void Reverse(char s[10])
{  
  int n=strlen(s);
  char *p,*q;
  p=&s[0],q=&s[n-1];
  while(p<=q)
  {
    swap(p++,q--);
  }
  printf("%s",s);
}

int main()
{
  char s[10],*p,*q;
  printf("Enter string: ");
  scanf("%s",s);
  Reverse(s);
  return 0;
}