#include<stdio.h>
#include<string.h>
int main()
{
    int n,l,j=0,pos=0;
    char str[30],substr[20];
    printf("Enter the string: ");
    scanf("%s",str);
    printf("Enter the substring: ");
    scanf("%s",substr);
    printf("\n");
    n=strlen(str);
    l=strlen(substr);
    for(int i=0;i<n;i++)
    {
      if(str[i]==substr[j])
      {
        if(j==0)
        pos=i;
        j++;
      }
      if(i!=0 && i==pos+j)
      break;
    }
    if(j==l)
    printf("Matched");
    else
    printf("Not matched");
    return 0;
}