#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    char str[20];
    printf("Enter string: ");
    scanf("%s",str);
    n=strlen(str);
    char str1[n],str2[n];
    strcpy(str1,str);
    for(int i=0;i<n;i++)
    {
        if(str1[i]<97)
        str1[i]+=32;
    }
    printf("%s\n",str1);
    strcpy(str2,str);
    for(int i=0;i<n;i++)
    {
        if(str2[i]>=97)
        str2[i]-=32;
    }
    printf("%s\n",str2);

    printf("%s\n",strlwr(str));
    printf("%s\n",strupr(str));
     return 0;
}