#include<stdio.h>
int main()
{
    FILE *ptr;
    ptr=fopen("test.txt","r");
    char ch;
    fscanf(ptr,"%c",&ch);
    printf("Reading the first character: %c\n",ch);
    fscanf(ptr,"%c",&ch);
    printf("Reading the second character: %c\n",ch);
    fscanf(ptr,"%c",&ch);
    printf("Reading the third character: %c\n",ch);
    fscanf(ptr,"%c",&ch);
    printf("Reading the fourth character: %c\n",ch);
    /*fscanf(ptr,"%c",&ch);
    printf("Reading the fifth character: %c\n",ch);*/
    printf("Last character: %c",fgetc(ptr));
    fclose(ptr);
    return 0;
}