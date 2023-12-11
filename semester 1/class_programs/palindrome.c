#include<stdio.h>
#include<string.h>
int main()
{
    int n,flag=0;
    char str[10];
    printf("Enter the string: ");
    scanf("%s",str);
    n=strlen(str);
    for(int i=0;i<n;i++)
    {
        if(str[i]==str[n-i-1])
          flag=1;
        else
        {
          flag=0;
          break;
        }
    }
    if(flag==1)
    printf("Palindrome");
    else
    printf("Not Palindrome");

     return 0;
}