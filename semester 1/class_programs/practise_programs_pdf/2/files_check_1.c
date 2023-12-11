#include<stdio.h>
#include<string.h>
int main()
{
    char ch;
    printf("N:New file\n");
    printf("O:Opening an existing file\n");
    FILE *fp;
    printf("Enter the operation: ");
    scanf("%c",&ch);
    switch(ch)
    {
      case 'N':
      {
        char n[5];
        printf("Enter file name: ");
        scanf("%s",n);
        fp=fopen(n,"w");
        break;
      }
      case 'O':
      {
        char n[5];
        printf("Enter file name: ");
        scanf("%s",n);
        fp=fopen(n,"a");
        break;
        //check
        char c;
        while((c=getc(fp))!=EOF)
        printf("%c",&c);
        //this part is not getting executed
      }
    }
    char s[10];
    printf("Enter data to be entered: ");
    scanf("%s",s);
    fprintf(fp,"%s",s); 

    int n;
    printf("Enter 1 to close the file  ");
    scanf("%d",n);
    if(n==1)
    {
       fclose(fp);
    }
    return 0;
}